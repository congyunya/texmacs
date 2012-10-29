
/******************************************************************************
* MODULE     : grid.hpp
* DESCRIPTION: grids for the graphics
* COPYRIGHT  : (C) 2003  Henri Lesourd
*******************************************************************************
* This software falls under the GNU general public license version 3 or later.
* It comes WITHOUT ANY WARRANTY WHATSOEVER. For details, see the file LICENSE
* in the root directory or <http://www.gnu.org/licenses/gpl-3.0.html>.
******************************************************************************/

#ifndef GRID_H
#define GRID_H
#include "frame.hpp"
#include "curve.hpp"
#include "renderer.hpp"

class grid_curve_rep: public tm_obj<grid_curve_rep> {
public:
  string col;
  curve c;
  inline grid_curve_rep () {}
  inline grid_curve_rep (string col2, curve c2):
    col(col2), c(c2) {}
};

class grid_curve : public tm_null_ptr<grid_curve_rep> {
public:
  inline grid_curve () {}
  inline grid_curve (string col, curve c):
    tm_null_ptr<grid_curve_rep> (tm_new<grid_curve_rep> (col, c)) {}
};

class grid_rep : public tm_obj<grid_rep> {
protected:
  array<SI> subd;
  array<string> col;
  point center;
public:
  inline grid_rep () {}
  inline grid_rep (array<SI> subd2, array<string> col2, point o):
    subd(subd2), col(col2), center(o) {}
  inline virtual ~grid_rep () {}

  virtual void set_aspect (tree aspect);

  virtual operator tree () = 0;
  virtual array<grid_curve> get_curves (
    point lim1, point lim2, bool b= false) = 0;
  virtual array<grid_curve> get_curves_around (
    point p, double delta, frame f);
  virtual point find_closest_point (point p, point pmin, point pmax) = 0;
  virtual point find_point_around (point p, double delta, frame f);
};

class grid : public tm_null_ptr<grid_rep> {
public:
  grid () :  tm_null_ptr<grid_rep>() {}
  grid (grid_rep* p) :  tm_null_ptr<grid_rep>(p) {}
  operator tree () { return (tree)*rep(); }
};

grid empty_grid();
grid cartesian (array<SI> subd, array<string> col, point o, double step);
grid polar (array<SI> subd, array<string> col, point o, double step, SI astep);
grid logarithmic (array<SI> subd, array<string> col, point o,
		  double step, SI base);

grid as_grid (tree t);
tree as_tree (grid g);

inline bool operator == (grid g1, grid g2) {
  return as_tree (g1) == as_tree(g2); }
inline bool operator != (grid g1, grid g2) {
  return as_tree (g1) != as_tree(g2); }

#endif // defined GRID_H
