/** -*- C++ -*-
 *
 *  This file is part of RawTherapee.
 *
 *  Copyright (c) 2017 Alberto Griggio <alberto.griggio@gmail.com>
 *  adapted for Rawtherapee J.Desmis december 2024
 *  RawTherapee is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  RawTherapee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RawTherapee.  If not, see <https://www.gnu.org/licenses/>.
 */

// adapted from the "color correction" module of Darktable. Original copyright follows
/*
    copyright (c) 2009--2010 johannes hanika.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <https://www.gnu.org/licenses/>.
*/

// this was extracted from rtgui/labgrid.h

#pragma once

namespace rtengine
{
    //OFFSET_MODIFIER and CIExy_MARGIN - Regarding the conversion of xy data to Labgrid coordinates
    constexpr float OFFSET_MODIFIER = 1.81818f;//Scaling coefficient of primary data and CIExy diagram with that of Labgrid.
    constexpr float CIExy_MARGIN = 0.1f;//corresponds to the left and bottom margin on the CIExy diagram
}
