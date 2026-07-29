// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * ┌───┬───┬───┬───┐
    * │ q │ w │ e │ r │
    * ├───┼───┼───┼───┤
    * │ a │ s │ d │ f │
    * ├───┼───┼───┼───┤
    * │ z │ x │ c │ v │
    * └───┴───┴───┴───┘
    */
    [0] = LAYOUT_numpad_4x3(
        KC_Q,    KC_W,    KC_E,    KC_R,
        KC_A,    KC_S,    KC_D,    KC_F,
        KC_Z,    KC_X,    KC_C,    KC_V
    )
};
