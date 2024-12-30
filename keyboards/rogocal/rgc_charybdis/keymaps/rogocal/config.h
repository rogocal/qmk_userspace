#pragma once

#define TAPPING
#ifdef TAPPING
// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
//#define IGNOtsRE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// This only works on manna harbour repo
#define BILATERAL_COMBINATIONS 500

// Allows for a keystroke after a hold
//#define RETRO_TAPPING

// When dynamic taping is active use this amount as increment
#define DYNAMIC_TAPPING_TERM_INCREMENT 10

// Makes nested keystrokes to act as hold, not as two keys, opposite to IGNORE_MOD_TAP_INTERRUPT kinda
// #define PERMISSIVE_HOLD
#endif

/* Mouse config. */
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y
