
/******************************************************************************
* MODULE     : edit_text.hpp
* DESCRIPTION: Main routines for the manipulation of "ordinary" text
* COPYRIGHT  : (C) 1999  Joris van der Hoeven
*******************************************************************************
* This software falls under the GNU general public license and comes WITHOUT
* ANY WARRANTY WHATSOEVER. See the file $TEXMACS_PATH/LICENSE for more details.
* If you don't have this file, write to the Free Software Foundation, Inc.,
* 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
******************************************************************************/

#ifndef EDIT_TEXT_H
#define EDIT_TEXT_H
#include "editor.hpp"

class edit_text_rep: virtual public editor_rep {
protected:
  void correct_concat (path p, int done=0);
  void correct (path p);
  bool pure_line (path p);
  bool accepts_return (path p);
  path prepare_for_insert ();

public:
  edit_text_rep ();
  ~edit_text_rep ();

  /********************************* text ************************************/
  bool insert_return ();
  void remove_return (path p);
  void insert_tree (tree t, path p_in_t);
  void insert_tree (tree t);
  void remove_backwards ();
  void remove_forwards ();
  void remove_structure_backwards ();
  void remove_structure_forwards ();
  void remove_structure_upwards ();

  /******************************** format ***********************************/
  void make_space (tree t);
  void make_space (string w);
  void make_space (string w, string y1, string y2);
  void make_hspace (string s);
  void make_hspace (string smin, string sdef, string smax);
  void make_vspace_before (string s);
  void make_vspace_before (string smin, string sdef, string smax);
  void make_vspace_after (string s);
  void make_vspace_after (string smin, string sdef, string smax);
  void make_format (string tag);
  void make_htab (string spc);
  void make_move (string x, string y);
  void make_resize (string x1, string y1, string x2, string y2);
  void make_insertion (string s);
  void position_insertion (string what, bool flag);
  void make_postscript (string file_name, bool link, string w, string h,
			string x1, string y1, string x2, string y2);
};

#endif // defined EDIT_TEXT_H
