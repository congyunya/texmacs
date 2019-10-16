<TeXmacs|1.99.11>

<style|source>

<\body>
  <active*|<\src-title>
    <src-package|pagella-font|1.0>

    <\src-purpose>
      Tweak various style parameters for the TeX Gyre Pagella font
    </src-purpose>

    <src-copyright|2019|Joris van der Hoeven>

    <\src-license>
      This software falls under the <hlink|GNU general public license,
      version 3 or later|$TEXMACS_PATH/LICENSE>. It comes WITHOUT ANY
      WARRANTY WHATSOEVER. You should have received a copy of the license
      which the software. If not, see <hlink|http://www.gnu.org/licenses/gpl-3.0.html|http://www.gnu.org/licenses/gpl-3.0.html>.
    </src-license>
  </src-title>>

  <use-package|texgyre-font>

  <assign|font|pagella>

  <assign|math-dots-post|<macro|<space|-0.03em|0em|0em>>>
</body>

<\initial>
  <\collection>
    <associate|preamble|true>
  </collection>
</initial>