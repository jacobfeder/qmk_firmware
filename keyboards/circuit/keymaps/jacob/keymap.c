#include "circuit.h"

#define _MAIN           0  // main layer
#define _SHIFT          1  // shift layer
#define _FN             2  // function layer

#define KC_TERM         LCTL(LALT(KC_T))  // open terminal on Linux (Ctrl+Alt+T)
#define KC_FN           TT(_FN)           // tapping toggle (multiple tags will toggle the layer on / off instead of momentary on)

/*  For a list of available keycodes, please see:
    
    - https://docs.qmk.fm/keycodes
    - https://docs.qmk.fm/features/advanced-keycodes

    NOTE:   We are using a macro ``KC_KEYMAP`` defined in '../../circuit.h' 
            that prepends the 'KC_' required by QMK. For example, if you 
            want to specify the KC_H key (the letter H), just leave out the
            'KC_' part at the beginning, so you would just write 'H'. If you
            want the KC_QUOT (quote) key, you would write 'QUOT'.

    NOTE 2: A lot of the following key definitions use the shortened aliases
            provided by QMK so that the names are always <= 4 characters in 
            length. This lets us keep everything in a neat grid instead of
            having crazy line spacing.
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = 
{
    [ _MAIN ] = KC_KEYMAP(
        ESC,   1,     2,     3,     4,     5,     6,     7,     8,     9,     0,     MINS,  EQL,   BSLS,  GRV,
        TAB,   Q,     W,     E,     R,     T,     Y,     U,     I,     O,     P,     LBRC,  RBRC,         BSPC,
        TERM,  A,     S,     D,     F,     G,     H,     J,     K,     L,     SCLN,  QUOT,                ENT,
        LSPO,  Z,     X,     C,     V,     B,     N,     M,     COMM,  DOT,   SLSH,                       RSPC,
        LALT,  LGUI,  LCTRL,  SPC,                                               FN,  LEFT,    UP,  DOWN,  RGHT
    ),

    /*  This is the function layer. You reach it by holding the FN (function) 
        key. A multi-tap of this key (number of times defined above in 
        TAPPING_TOGGLE macro) will toggle this layer on/off. 

        * To indicate that a key is *unused*, use ``NO`` (non-operation).
        * To indicate that a key should be the same as the layer below, use 
            ``TRNS`` (transparent).
       */
    [ _FN ] = KC_KEYMAP(
        TRNS,  F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10 ,  F11 ,  F12 ,    NO,   NO,
        NO,    NO,    UP  ,  NO,    NO,    NO,    NO,    NO,    NO,    NO,    MPLY,  VOLD,  VOLU,         DEL,
        CAPS,  LEFT,  DOWN,  RGHT,  NO,    NO,    NO,    NO,    NO,    NO,    MPRV,  MNXT,                 NO,  
        NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,                          NO,  
        TRNS,  TRNS,  TRNS,  NO,                                              TRNS,  HOME,  PGUP,  PGDN,   END
    )
};