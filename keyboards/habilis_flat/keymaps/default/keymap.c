// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
                 // Left hand
                 KC_GRV  , KC_1 , KC_2 , KC_3,  KC_4,  KC_5,
                 KC_RBRC , KC_Q , KC_W , KC_E,  KC_R,  KC_T,
                 KC_NO   , KC_A , KC_S , KC_D,  KC_F,  KC_G,
                 KC_NUBS , KC_Z , KC_X , KC_C,  KC_V,  KC_B,
                 KC_NO   , KC_NO, KC_NO, KC_NO, KC_NO,
                 // Left thumb cluster
                 KC_LSFT, KC_NO, KC_DEL,
                 KC_NO, KC_SPC, KC_LCTL,

                 // Right hand
                 KC_6  , KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS,
                 KC_Y  , KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC,
                 KC_H  , KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,
                 KC_N  , KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                 /*   */ KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
                 // Right thumb cluster
                 KC_LGUI, KC_NO, KC_BSPC,
                 KC_LALT, KC_ENT, KC_RALT
                 )
};
