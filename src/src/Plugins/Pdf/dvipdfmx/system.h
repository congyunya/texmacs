/*  $Header: /home/cvsroot/dvipdfmx/src/system.h,v 1.7 2008/05/18 10:40:40 chofchof Exp $
    
    This is dvipdfmx, an eXtended version of dvipdfm by Mark A. Wicks.

    Copyright (C) 2002 by Jin-Hwan Cho and Shunsaku Hirata,
    the dvipdfmx project team <dvipdfmx@project.ktug.or.kr>
    
    Copyright (C) 1998, 1999 by Mark A. Wicks <mwicks@kettering.edu>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#include <string.h>
#include <ctype.h> // isspace

#define PACKAGE "TeXmacs/PDF"
#define VERSION "0.0.0"

#ifdef WIN32
#  undef ERROR
#  undef NO_ERROR
#  undef RGB
#  undef CMYK
#  undef SETLINECAP
#  undef SETLINEJOIN
#  undef SETMITERLIMIT
#  pragma warning(disable : 4101 4018)
#else
#  ifndef __cdecl
#  define __cdecl
#  endif
#  define CDECL
#endif /* WIN32 */

#endif /* _SYSTEM_H_ */
