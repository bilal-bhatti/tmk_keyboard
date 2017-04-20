  /*
 * SpaceFN layout
 * http://geekhack.org/index.php?topic=51069.0
 */
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU|
     * |-----------------------------------------------------------| |-----------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD|
     * |-----------------------------------------------------------| `-----------'
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|     ,---.
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |
     * |-----------------------------------------------------------| ,-----------.
     * |Ctrl |Alt |Gui |         Space         |Gui |Alt |Menu|Ctrl| |Lef|Dow|Rig|
     * `-----------------------------------------------------------' `-----------'
     */
    KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    TRNS,TRNS,TRNS,TRNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    TRNS,TRNS,TRNS,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         TRNS,TRNS,TRNS,TRNS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           TRNS,TRNS,TRNS,
    CAPS,LALT,LGUI,          FN0,                     RGUI,RALT,FN0, RCTL,     LEFT,DOWN,RGHT,    TRNS,TRNS,TRNS
    ),

    /* 1: SpaceFN
     * ,---.  ,-----------.  ,---------------. ,-------------------.
     * |   |  |  |  |  |  |  |  |  |Prev|Play| |Next|Mute|Vold|Volu|
     * `---'  `-----------'  `---------------' `-------------------'
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |    |   |   |VOUP|PGUP|   |   |Hom|End|   |Psc|Slk|Pau|Ins |
     * |-----------------------------------------------------------|
     * |      |   |   |VOLD|PGDN|   |Lef|Dow|Up |Rig|   |   |      |
     * |-----------------------------------------------------------|      ,----.
     * |        |   |   |   |   |Spc|`  |~  |   |   |   |          |      |Volu|
     * |-----------------------------------------------------------| ,--------------.
     * |    |    |    |                        |    |    |    |    | |Mply|Vold|Mnxt|
     * `-----------------------------------------------------------' `--------------'
     */
    KEYMAP(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,          PSCR,SLCK,BRK,
    GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,VOLU, PGUP,TRNS,TRNS,HOME,END,TRNS, PSCR,SLCK,PAUS,INS,      DEL, END, PGDN,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,VOLD, PGDN,TRNS,LEFT,DOWN,UP ,RGHT,TRNS,TRNS,     TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS, TRNS,SPC, GRV,FN1, TRNS, TRNS,TRNS,         TRNS,          VOLU,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     MPLY,VOLD,MNXT,    TRNS,TRNS,TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
