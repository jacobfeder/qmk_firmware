#include "circuit.h"

#define _MAIN 0
#define _FN   1

#define KC_ KC_TRNS
#define KC_FN LT(_FN, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = KC_KEYMAP(
      MPRV ,  MPLY ,  MNXT,
      FN   ,  VOLD ,  VOLU
  ),

  [_FN] = KC_KEYMAP(
            ,    ,        ,
            ,  B ,  SPACE
  )
};