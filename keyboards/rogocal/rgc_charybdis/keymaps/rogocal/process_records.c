#include QMK_KEYBOARD_H

#include "keycodes.h"

__attribute__((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

__attribute__((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) { return true; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return process_record_keymap(keycode, record) && process_record_secrets(keycode, record);
}
