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
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D4, D5, D6, D7, F0, F1, F2, F3, F4, F5, F6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#endif