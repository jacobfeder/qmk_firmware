/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0xBABE
#define DEVICE_VER      0x0001
#define MANUFACTURER    Benjamin Shanahan and Jacob Feder
#define PRODUCT         Circuit Keyboard
#define DESCRIPTION     Compact keyboard with arrow keys.

/* Modify bootmagic keycodes so that we can enter the bootloader. */
#define BOOTMAGIC_KEY_SALT       KC_SPACE
#define BOOTMAGIC_KEY_BOOTLOADER KC_B

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* pin-out */
#define MATRIX_ROW_PINS { F1, F4, D6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B6, D7, C7, C6, F0, E6, D2, D4, D1, B7, D0, D3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TOGGLE    2  // set tap-toggle to trigger after 2 taps
#define TAPPING_TERM    200

#endif