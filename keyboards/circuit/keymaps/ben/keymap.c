#include "circuit.h"

#define _MAIN           0  // main layer
#define _SHIFT          1  // shift layer
#define _FN             2  // function layer

#define KC_TERM         LCTL(LALT(KC_T))    // open terminal on Linux (Ctrl+Alt+T)
#define KC_KILL         LALT(KC_F4)         // Alt+F4 (close window)
#define KC_CAD          LCTL(LALT(KC_DEL))  // Ctrl+Alt+Delete
#define KC_LOCK         LCTL(LALT(KC_L))    // Ctrl+Alt+L (lock screen)
#define KC_FN           MO(_FN)             // momentary on/off toggle

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
        GESC,  1,     2,     3,     4,     5,     6,     7,     8,     9,     0,     MINS,  EQL,   BSLS,  GRV,
        TAB,   Q,     W,     E,     R,     T,     Y,     U,     I,     O,     P,     LBRC,  RBRC,         BSPC,
        TERM,  A,     S,     D,     F,     G,     H,     J,     K,     L,     SCLN,  QUOT,                ENT,
        LSFT,  Z,     X,     C,     V,     B,     N,     M,     COMM,  DOT,   SLSH,                       RSFT,
        LCTL,  LGUI,  LALT,  SPC,                                               FN,  LEFT,  DOWN,    UP,  RGHT
    ),

    /*  This is the function layer. You reach it by holding the FN (function) 
        key. A multi-tap of this key (number of times defined above in 
        TAPPING_TOGGLE macro) will toggle this layer on/off. 

        * To indicate that a key is *unused*, use ``NO`` (non-operation).
        * To indicate that a key should be the same as the layer below, use 
            ``TRNS`` (transparent).
       */
    [ _FN ] = KC_KEYMAP(
        TRNS,  F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10 ,  F11 ,  F12 ,  VOLD,  VOLU,
        NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    MPLY,  MPRV,  MNXT,         DEL,
        CAPS,  NO,    NO,    NO,    NO,    NO,    NO,    NO,    KILL,  NO,    NO,    NO,                  ENT,  
        TRNS,  NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    CAD,                        TRNS,  
        TRNS,  TRNS,  TRNS,  CALC,                                            TRNS,  HOME,  PGDN,  PGUP,  END
    )
};
