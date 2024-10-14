#pragma once

#include QMK_KEYBOARD_H
#include "layers.h"

/* Home row modifier keycodes */
#define HR_A LGUI_T(KC_A) /* Press for A, hold for left GUI */
#define HR_R LALT_T(KC_R) /* Press for R, hold for left ALT */
#define HR_S LSFT_T(KC_S) /* Press for S, hold for left SFT */
#define HR_T LCTL_T(KC_T) /* Press for T, hold for left CTL */

#define HR_N RCTL_T(KC_N) /* Press for N, hold for right CTL */
#define HR_E RSFT_T(KC_E) /* Press for E, hold for right SFT */
#define HR_I RALT_T(KC_I) /* Press for I, hold for right ALT */
#define HR_O RGUI_T(KC_O) /* Press for O, hold for right GUI */

/* Tap-Hold keycodes */
#define TH_ESC  LT(L_MOUSE, KC_ESC)       /* Tap for Escape, Hold for RAISE layer */
#define TH_TAB  LT(L_SYMBOLS, KC_TAB)     /* Tap for Tab, Hold for LOWER layer */
#define TH_ENT  LT(L_NUMPAD, KC_ENT)      /* Tap for Enter, Hold for RAISE layer */
#define TH_SPC  LT(L_NAVIGATION, KC_SPC)       /* Tap for Space, Hold for RAISE layer */
#define TH_BSPC LT(L_NAVIGATION, KC_BSPC) /* Tap for Backpace, Hold for RAISE layer */

/* Layeer modifications */
#define MO_ADJ MO(L_ADJUST) /* Momentarily turn on ADJUST layer when pressed */
#define TO_QWRT TO(L_QWERTY) /* Turns on layer L_QWERTY */
#define TO_CLMK TO(L_COLEMAK) /* Turns on layer L_COLEMAK */

/* Secrets */
enum custom_keycodes {
    UPDIR = QK_USER,
    SCRT_1,
    SCRT_2,
    SCRT_3,
    SCRT_4,
    SCRT_5,
};
