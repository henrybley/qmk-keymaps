#include QMK_KEYBOARD_H

#include "sofle_v2_keymap.h"
#include "sm_td.h"
#include "sm_td_user.h"

// Track the current color index
static uint8_t current_color_index = 0;

// Color values in HSV format
const HSV color_array[COLOR_COUNT] = {
    {0,   255, 255},  // Red
    {28,  255, 255},  // Orange
    {43,  255, 255},  // Yellow
    {85,  255, 255},  // Green
    {170, 255, 255},  // Blue
    {213, 255, 255},  // Purple
    {234, 255, 255},  // Pink
    {0,   0,   255}   // White
};

void keyboard_post_init_user(void) {
    // Set default RGB mode to breathing
    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
    
    // Set default speed and color if desired
    rgb_matrix_sethsv(
        color_array[1].h,
        color_array[1].s,
        color_array[1].v
    ); // Default color
    rgb_matrix_set_speed(70);     // Default speed
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_smtd(keycode, record)) {
        return false;
    }
    // your code here
    switch (keycode) {
        case RGB_CYCLE_COLOR:
            if (record->event.pressed) {
                // Cycle to next color
                current_color_index = (current_color_index + 1) % COLOR_COUNT;
                rgb_matrix_sethsv(
                    color_array[current_color_index].h,
                    color_array[current_color_index].s,
                    color_array[current_color_index].v
                );
            }
            return false;
    }
    return true;
}


#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




