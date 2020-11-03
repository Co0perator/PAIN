/***************************
This program is an interpreter for the PAIN programming language
Copyright (C) 2020  Miles Potter
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program; If not, see <http://www.gnu.org/licenses/>.
********************************/
#include <sstream>

//im trying to figure out how to put all the files together into one long string which can be read
//I've decided that the file import string will be "@BRING_IN_ANOTHER_PERSONS_CODE [filename]". the @ symbol will denote a preprocessor directive, but not always.
