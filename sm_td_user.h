#pragma once

#include QMK_KEYBOARD_H

#include "sofle_v2_keymap.h"
#include "sm_td.h"

void on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        SMTD_MT(CKC_A, KC_A, KC_LEFT_GUI)
        SMTD_MT(CKC_S, KC_S, KC_LEFT_ALT)
        SMTD_MT(CKC_D, KC_D, KC_LSFT)
        SMTD_MT(CKC_F, KC_F, KC_LEFT_CTRL)
        SMTD_MT(CKC_J, KC_J, KC_RIGHT_CTRL)
        SMTD_MT(CKC_K, KC_K, KC_RSFT)
        SMTD_MT(CKC_L, KC_L, KC_RIGHT_ALT)
        SMTD_MT(CKC_SC, KC_SCLN, KC_RIGHT_GUI)
    }
}
