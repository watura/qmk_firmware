#include QMK_KEYBOARD_H
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define LSANDS LSFT_T(KC_SPC)
#define RSANDS RSFT_T(KC_SPC)
#define LOWENT LT(_LOWER, KC_ENT)
#define RAIBSP LT(_RAISE, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.             ,-----------------------------------------.
 * | ESC/`|   1  |   2  |   3  |   4  |   5  |             |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------|             |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |             |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------|             |------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |             |   H  |   J  |   K  |   L  |   ;  | Enter|
 * |------+------+------+------+------+------+-------------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   [  |   ]  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * `-------------+------+------+------+------+------+------+------+------+------+------+-------------'
 *               | Alt | Lower  | GUI |SandS | Enter| Bksp |SandS |GUI  | Raise | Alt |
 *               `---------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT( \
   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO, \
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, \
  KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO, \
                   KC_LALT, LOWER, KC_LGUI,  LSANDS,  LOWENT,  RAIBSP, RSANDS, KC_RGUI, RAISE, KC_RALT\
),

/* Lower
 * ,-----------------------------------------.             ,-----------------------------------------.
 * |      |      |      |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------|             |------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |             |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+------|             |------+------+------+------+------+------|
 * | Del  |      |      |      |      |  `   |             |   '  |   -  |   =  |   [  |   ]  |  |   |
 * |------+------+------+------+------+------+-------------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   "  |   _  |   +  |  {   |   }  |  \   |
 * `-------------+------+------+------+------+------+------+------+------+------+------+-------------'
 *               |      |      |      |      |      |      |      |      |      |      |
 *               `---------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT( \
    KC_NO,   KC_NO, KC_NO,     KC_NO,  KC_NO,    KC_NO,                     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, \
  KC_DEL,  _______, _______, KC_PIPE, KC_BSLS, KC_GRAVE,                  KC_QUOTE, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,  KC_NO, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_DQUO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,  KC_NO, \
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Raise
 * ,-----------------------------------------.             ,-----------------------------------------.
 * |      |      |      |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------.             ,------+------+------+------+------+------|
 * |      |      |  ↑  |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------.             ,------+------+------+------+------+------|
 * |      |  ←  |  ↓  |  →  |      |      |             |      | kana |      |      | eisu |      |
 * |------+------+------+------+------+------+-------------+------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |      |      |   6  |   7  |   8  |   9  |   0  |      |
 * `-------------+------+------+------+------+------+------+------+------+------+------+-------------'
 *               |      |      |      |      |      |      |      |      |      |      |
 *               `---------------------------------------------------------------------'
 */

[_RAISE] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,  \
  _______, _______, _______, _______, _______, _______,                   _______, KC_LANG1,_______, _______, KC_LANG2,_______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------.             ,-----------------------------------------.
 * |      |      |      |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------.             ,------+------+------+------+------+------|
 * |      | Reset|      |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------.             ,------+------+------+------+------+------|
 * |      |      |      |      |      |      |             |      |      |      |      |      |      |
 * |------+------+------+------+------+------+-------------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-------------+------+------+------+------+------+------+------+------+------+------+-------------'
 *               |      |      |      |      |      |      |      |      |      |      |
 *               `---------------------------------------------------------------------'
*/

[_ADJUST] =  LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, RESET  , _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, KC_GESC,                   KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______\
)
};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
