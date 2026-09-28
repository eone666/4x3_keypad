#include QMK_KEYBOARD_H

enum custom_keycodes {
    GP_BTN1 = QK_KB_0,
    GP_BTN2,
    GP_BTN3,
    GP_BTN4,
    GP_BTN5,
    GP_BTN6,
    GP_BTN7,    
    GP_BTN8,
    GP_BTN9,
    GP_BTN10,
    GP_BTN11,
    GP_BTN12
};

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
    [0] = LAYOUT_keypad_4x3(
        KC_Q,    KC_W,    KC_E,    KC_R,
        KC_A,    KC_S,    KC_D,    KC_F,
        KC_Z,    KC_X,    KC_C,    KC_V
    )       
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GP_BTN1:
        case GP_BTN2:
        case GP_BTN3:
        case GP_BTN4:
        case GP_BTN5:
        case GP_BTN6:
        case GP_BTN7:
        case GP_BTN8:
        case GP_BTN9:
        case GP_BTN10:
        case GP_BTN11:
        case GP_BTN12: {
            uint8_t button = keycode - GP_BTN1;

            if (record->event.pressed) {
                register_joystick_button(button);
            } else {
                unregister_joystick_button(button);
            }

            return false;
        }
    }
    return true;
}