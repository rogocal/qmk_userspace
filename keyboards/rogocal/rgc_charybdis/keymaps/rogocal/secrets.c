#include QMK_KEYBOARD_H

#define MACRO_TIMER 100 // The amount of time, in milliseconds, to wait before typing the next character.

#if (__has_include("secrets.h") && !defined(NO_SECRETS))
#include "secrets.h"
#else
static const char * const secrets[] = {
  "test1",
  "test2",
  "test3",
  "test4",
  "test5"
};
#endif

bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SCRT_1 ... SCRT_5: // Secrets!  Externally defined strings, not stored in repo
      if (record->event.pressed) {
        clear_mods();
        clear_oneshot_mods();
        send_string_with_delay(secrets[keycode - SCRT_1], MACRO_TIMER);
        //send_string(secret[keycode - M_XXX1]);
      }
      return false;
      break;
  }
  return true;
}
