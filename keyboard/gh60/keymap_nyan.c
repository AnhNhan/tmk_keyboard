#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: QWERTZ
     * ,--------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   ` |   \|
     * |--------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  Backsp|
     * |--------------------------------------------------------------|
     * |FN    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| FN|Return |
     * |--------------------------------------------------------------|
     * |Shift| FN|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   Shift| FN|
     * |--------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space             |Alt |Gui |App |Ctrl|
     * `--------------------------------------------------------------'
     */
    KEYMAP_NYAN(ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV, \
                TAB ,   Q,   W,   E,   R,   T,   Z,   U,   I,   O,   P,LBRC,RBRC,BSPC, \
                FN0 ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,   P, ENT, \
                LSFT, FN0,   Y,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT, X, \
                LCTL,LGUI,LALT,          SPC,                     RALT,RGUI, APP,RCTL \
                ,   A,   S,   D,   F,   G \
                ),
    /* Keymap 1: FN
     * ,--------------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|          |
     * |--------------------------------------------------------------|
     * |Caps |FnQ|   |   |   |   |   |   |   |   |   |   |   |        |
     * |--------------------------------------------------------------|
     * |FN    |Lef|Dow|Rig|Hom|PgU|Psc|Slk|Pau|   |   |   | FN|Return |
     * |--------------------------------------------------------------|
     * |Shift| FN|   |Del|   |End|PgD|   |   |   |   |   |   Shift| FN|
     * |--------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space             |Alt |Gui |App |Ctrl|
     * `--------------------------------------------------------------'
     */
    KEYMAP_NYAN( ESC,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS, DEL, \
                CAPS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,LEFT,DOWN,RGHT,HOME,PGUP,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,TRNS, DEL,TRNS, END,PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,TRNS,         TRNS,                     TRNS,TRNS,TRNS,TRNS \
                ,TRNS,TRNS,TRNS,TRNS,TRNS \
                ),
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
