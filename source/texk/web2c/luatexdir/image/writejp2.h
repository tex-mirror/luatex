/* writejpx.h

   Copyright 2011 Taco Hoekwater <taco@luatex.org>
   Copyright 2011 Hartmut Henkel <hartmut@luatex.org>

   This file is part of LuaTeX.

   LuaTeX is free software; you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2 of the License, or (at your
   option) any later version.

   LuaTeX is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with LuaTeX; if not, see <http://www.gnu.org/licenses/>. */

/* $Id$ */

#ifndef WRITEJPX_H
#  define WRITEJPX_H

#  include "image.h"

void read_jp2_info(image_dict *, img_readtype_e);
void write_jp2(PDF, image_dict *);

#endif                          /* WRITEJPX_H */
