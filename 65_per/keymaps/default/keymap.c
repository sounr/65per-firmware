/* Copyright 2019 marhalloweenvt
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
#include QMK_KEYBOARD_H
#include "keymap_norwegian.h" // aa, oe, oo

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT( /* Base */
      KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,   KC_7,   KC_8,      KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC, KC_HOME, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,      KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_NUBS, KC_PGUP, \
			KC_CAPS ,KC_A,    KC_S,    KC_D,   KC_F,   KC_G,    KC_H,   KC_J,   KC_K,      KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,  KC_PGDN,          \
			KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,    KC_N,   KC_M,   KC_COMM,   KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,   KC_END,           \
			KC_LCTL, KC_LGUI, KC_LALT,                 KC_SPC,                  KC_RALT,   MO(1),   KC_LCTL,  KC_LEFT, KC_DOWN, KC_RIGHT),
  [1] = LAYOUT( /* FN */
      RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,OUT_AUTO,  RGB_MOD, \
      _______, _______, _______, NO_AE  , RGB_SAI, RGB_VAI, RGB_SPD, RGB_HUI, _______, NO_OSTR, _______, _______, OUT_USB, _______,  RGB_TOG, \
      _______, NO_ARNG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_MPLY,           \
      _______, _______, _______,                   _______,                   _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT),             

};
//OUT_AUTO, OUT_BT
/*
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
*/


