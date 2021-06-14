/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#define SPLIT_USB_DETECT

/* Use I2C or Serial, not both */
#define USE_SERIAL
#define SELECT_SOFT_SERIAL_SPEED 1
// #define USE_I2C

/* Select hand configuration */
#define MASTER_RIGHT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef RGBLED_NUM
#define RGBLED_NUM 80
#define RGBLIGHT_ANIMATIONS

#define RGBLIGHT_DEFAULT_HUE 199
#define RGBLIGHT_DEFAULT_SAT 250
#define RGBLIGHT_DEFAULT_VAL 140
