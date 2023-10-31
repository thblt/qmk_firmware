// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐ ┌───┬───┬───┐
     * │ Q │ W │ E │ │ R │ T │ Y │
     * └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_1x6(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y)
};
