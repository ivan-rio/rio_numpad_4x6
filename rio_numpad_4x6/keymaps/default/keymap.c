
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_rio_numpad_4x6(
        KC_MUTE,                          RGB_TOG,
        KC_NUM_LOCK,    KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,          KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,          KC_P5,   KC_P6,
        KC_P1,          KC_P2,   KC_P3,  
        KC_P0,          KC_PDOT,          KC_PENT
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            rgblight_step();
        } else {
            rgblight_decrease_hue();
        }
    }
    return false;
}
