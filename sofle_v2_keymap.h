#pragma once

#include QMK_KEYBOARD_H

#define IIII KC_NO
#define ___  KC_NO // no switches on a board

enum custom_keycodes {
    SMTD_KEYCODES_BEGIN = SAFE_RANGE,
    CKC_A, // reads as C(ustom) + KC_A, but you may give any name here
    CKC_S,
    CKC_D,
    CKC_F,
    CKC_J,
    CKC_K,
    CKC_L,
    CKC_SC,
    SMTD_KEYCODES_END,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,       KC_6, KC_7, KC_8, KC_9, KC_0, IIII,
        KC_PPLS, KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_TAB, CKC_A, CKC_S, CKC_D, CKC_F, KC_G,   KC_H, CKC_J, CKC_K, CKC_L, CKC_SC, KC_QUOT,
        KC_MINS, KC_Z, KC_X, KC_C, KC_V, KC_B, ___, ___, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_PEQL,
            IIII, IIII, KC_ESC, MO(1), KC_SPC,      KC_ENT, KC_BSPC, MO(2), IIII, DF(9)),
	[1] = LAYOUT(
        IIII, IIII, IIII, IIII, IIII, IIII,         IIII, IIII, IIII, IIII, IIII, IIII,
        IIII, IIII, IIII, KC_LBRC, KC_RBRC, IIII,   IIII, IIII, IIII, IIII, IIII, IIII,
        IIII, IIII, IIII, KC_LCBR, KC_RCBR, IIII,   KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, IIII, IIII,
        IIII, IIII, IIII, IIII, IIII, IIII, ___,    ___, IIII, IIII, IIII, IIII, IIII, IIII,
            IIII, IIII, IIII, IIII, IIII,           IIII, KC_DEL, IIII, IIII, IIII),
	[2] = LAYOUT(
        IIII, IIII, IIII, IIII, IIII, IIII,         IIII, IIII, IIII, IIII, IIII, IIII,
        IIII, IIII, KC_7, KC_8, KC_9, IIII,         IIII, IIII, IIII, IIII, IIII, IIII,
        IIII, IIII, KC_4, KC_5, KC_6, IIII,         IIII, IIII, IIII, IIII, IIII, IIII,
        IIII, KC_0, KC_1, KC_2, KC_3, IIII, ___,    ___, IIII, IIII, IIII, IIII, IIII, IIII,
            IIII, IIII, IIII, IIII, IIII,           IIII, IIII, IIII, IIII, IIII),
    [9] = LAYOUT(//Gaming
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,       KC_6, KC_7, KC_8, KC_9, KC_0, IIII,
        KC_PPLS, KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, CKC_J, CKC_K, CKC_L, CKC_SC, KC_QUOT,
        KC_MINS, KC_Z, KC_X, KC_C, KC_V, KC_B, ___, ___, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_PEQL,
            IIII, IIII, KC_ESC, KC_LEFT_CTRL, KC_SPC,      KC_ENT, KC_BSPC, MO(2), IIII, DF(0)),

};

