/* Copyright 2021 Zach White
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "rslate.h"

#ifdef RGB_MATRIX_ENABLE

#define RGB_MATRIX_CENTER { 42, 18 } 
led_config_t g_led_config = { {
	{4,4, 3,3, 2,2, 1,1, 0,0},
	{4,4, 3,3, 2,2, 1,1, 0,0},
	{5,5, 6,6, 7,7, 8,8, 9,9},
	{5,5, 6,6, 7,7, 8,8, 9,9}
},{
	{38,6},{30,6},{22,6},{14,6},{6,6},
	{6,14},{14,14},{22,14},{30,14},{38,14},
	
},{
	4,4,4,4,4,4,4,4,4,4
}
	
};

#endif
