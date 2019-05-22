
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; MODULE      : boot.scm
;; DESCRIPTION : some global variables, public macros, on-entry, on-exit and
;;               initialization of the TeXmacs module system
;; COPYRIGHT   : (C) 1999  Joris van der Hoeven
;;
;; This software falls under the GNU general public license version 3 or later.
;; It comes WITHOUT ANY WARRANTY WHATSOEVER. For details, see the file LICENSE
;; in the root directory or <http://www.gnu.org/licenses/gpl-3.0.html>.
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define texmacs-user (current-module))
(define temp-module (current-module))
(define temp-value #f)

(cond-expand
  (guile-2.2
    (use-modules (ice-9 rdelim) (ice-9 pretty-print)))
  (else
    (define (guile-a?) (equal? (scheme-dialect) "guile-a"))
    (define (guile-b?) (equal? (scheme-dialect) "guile-b"))
    (define (guile-c?) (equal? (scheme-dialect) "guile-c"))
    (define (guile-b-c?) (or (guile-b?) (guile-c?)))
    (if (guile-c?) (use-modules (ice-9 rdelim) (ice-9 pretty-print)))))

(define has-look-and-feel? (lambda (x) (== x "emacs")))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Redirect standard output
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define original-display display)
(define original-write write)

(define (display . l)
  "display one object on the standard output or a specified port."
  (if (or (null? l) (not (null? (cdr l))))
      (apply original-display l)
      (tm-output (display-to-string (car l)))))

(define (write . l)
  "write an object to the standard output or a specified port."
  (if (or (null? l) (not (null? (cdr l))))
      (apply original-write l)
      (tm-output (object->string (car l)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Provide functions if not defined and public macros
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-macro (provide-public head . body)
  (if (or (and (symbol? head) (not (defined? head)))
	  (and (pair? head) (symbol? (car head)) (not (defined? (car head)))))
      `(define-public ,head ,@body)
      '(noop)))

(cond-expand
  (guile-2.2
    (define-macro (define-public-macro head . body)
      `(begin
         (define-macro ,(car head)
           (lambda ,(cdr head) ,@body))
         (export-syntax ,(car head)))))
  (else
    (if (guile-a?)
       (define-macro (define-public-macro head . body)
         `(define-public ,(car head)
	     ;; FIXME: why can't we use procedure->macro
	     ;; for a non-memoizing variant?
	     (procedure->memoizing-macro
	       (lambda (cmd env)
	         (apply (lambda ,(cdr head) ,@body) (cdr cmd)))))))
    (if (not (guile-a?))
       (define-macro (define-public-macro head . body)
         `(begin
	        (define-macro ,(car head)
	          (lambda ,(cdr head) ,@body))
	        (export ,(car head)))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; On-entry and on-exit macros
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define (quit-TeXmacs-scheme) (noop))

(define-macro (on-entry . cmd)
  `(begin ,@cmd))

(define-macro (on-exit . cmd)
  `(set! quit-TeXmacs-scheme (lambda () ,@cmd (,quit-TeXmacs-scheme))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Module switching
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-macro (with-module module . body)
  `(begin
     (eval-when (expand load eval)
       (set! (@@ (guile-user) temp-module) (current-module))
       (set-current-module ,module))
     ,@body
     (eval-when (expand load eval) (set-current-module (@@ (guile-user) temp-module)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Module handling
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; the definition
; (define-macro (import-from . modules)
;    `(eval-when (expand load eval) (process-use-modules
;        (list ,@(map (lambda (m) `(list (quote ,m))) modules)))))
; is equivalent in Guile 2.2 to
;    (define-macro (import-from . modules) `(use-modules ,@ modules )))
; but works also in Guile 1.8


(cond-expand
  (guile-2.2
    (define-macro (import-from . modules) `(use-modules ,@ modules )))
  (else (if (guile-a?)
      (begin
        (define import-from use-modules)
        (define re-export export)))
    (if (guile-b-c?)
      (begin
        (define-macro (import-from . modules)
	  `(process-use-modules
	    (list ,@(map (lambda (m)
	  		 `(list ,@(compile-interface-spec m)))
	  	       modules))))
      ;; FIXME: why does this not work?
      ;; (define-macro (import-from . modules)
      ;;   (define (import-from-body module)
      ;;     `(module-use! (current-module) (resolve-module ',module)))
      ;;   `(begin
      ;;     ,@(map import-from-body modules)))
      ))))

(define (module-exported-symbols m)
  (module-map (lambda (sym var) sym) (module-public-interface (resolve-module m))))

(define-macro (inherit-modules . which-list)
`(begin (use-modules ,@which-list)
    ,@(map (lambda (m) ``(export ,@(module-exported-symbols ',m))) which-list)))

(cond-expand
    (guile-2.2
      (with-module the-root-module
        (define-macro (texmacs-module name . options)
          (define (transform action)
            (cond ((not (pair? action)) (noop))
              ((equal? (car action) :use) (cons 'use-modules (cdr action)))
              ((equal? (car action) :inherit) (cons 'inherit-modules (cdr action)))
              ((equal? (car action) :export)
               (display "Warning] The option :export is no longer supported\n")
               (display "       ] Please use tm-define instead\n"))
              (else '(noop))))
          (let ((l (map-in-order transform options)))
            (set! l (cons `(module-use! (current-module) ,(@@ (guile-user) texmacs-user)) l))
        ;;(display "Loading ") (display name) (display "\n")
            `(begin
               (eval-when (expand) (display "IN MODULE:") (display ',name) (display "\n"))
               (define-module ,name)
               ,@l
               (eval-when (expand) (display "END MODULE HEADER:") (display ',name) (display "\n")))))
        (export-syntax texmacs-module)))
   (else
        (define-macro (texmacs-module name . options)
          (define (transform action)
            (cond ((not (pair? action)) (noop))
              ((equal? (car action) :use) (cons 'use-modules (cdr action)))
              ((equal? (car action) :inherit) (cons 'inherit-modules (cdr action)))
              ((equal? (car action) :export)
               (display "Warning] The option :export is no longer supported\n")
               (display "       ] Please use tm-define instead\n"))
              (else '(noop))))
          (let ((l (map-in-order transform options)))
            (if (guile-b-c?)
            (set! l (cons `(module-use! (current-module) ,texmacs-user) l)))
            ;;(display "loading ") (display name) (display "\n")
            `(begin
               (define-module ,name)
               ,@l)))))

(define-public (module-available? module-name)
  (catch #t
    (lambda () (resolve-interface module-name) #t)
    (lambda (key . args) #f)))

(define-public (module-provide m)
  (if (not (module-available? m)) (module-load m)))
