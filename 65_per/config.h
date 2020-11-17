/*

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6565
#define DEVICE_VER      0x0001
#define MANUFACTURER    Solex
#define PRODUCT         65%
#define DESCRIPTION     65% keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS \
	{ F1, F4, F5, F6, F7, C7, C6, B5, D0, B7}
#define MATRIX_COL_PINS \
	{ D4, D6, B0, D1, D2, D3, D5 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// RGB Lighting
#define RGB_DI_PIN B6	//input pin for RGB

#define RGBLED_NUM 10	//number of LED's connected in serial

//#define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects

#define RGBLIGHT_HUE_STEP 10	//The number of steps to cycle through the hue by
#define RGBLIGHT_SAT_STEP 17	//The number of steps to increment the saturation by
#define RGBLIGHT_VAL_STEP 17	//The number of steps to increment the brightness by
#define RGBLIGHT_LIMIT_VAL 130	//The maximum brightness level (0-255)
#define RGBLIGHT_SLEEP			//If defined, the RGB lighting will be switched off when the host goes to sleep

//#define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#define RGBLIGHT_LED_PROCESS_LIMIT 4
#define RGBLIGHT_LED_FLUSH_LIMIT 32

#define RGBLIGHT_STARTUP_HUE 0 // Sets the default hue value, if none has been set
#define RGBLIGHT_STARTUP_SAT 130 // Sets the default saturation value, if none has been set
#define RGBLIGHT_STARTUP_VAL 130 // Sets the default brightness value, if none has been set
#define RGBLIGHT_STARTUP_SPD  // Sets the default animation speed, if none has been set 0-127


//Bluetooth module
#define AdafruitBleResetPin D7
#define AdafruitBleCSPin    B4
#define AdafruitBleIRQPin   E6

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

//#define NO_JTAG_DISABLE ???
