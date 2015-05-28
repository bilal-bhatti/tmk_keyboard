// AEK II TKL
#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];

#define KEYMAP( \
    K0A,      K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N,      K0O, K0P, K0Q, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N,      K1O, K1P, K1Q, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,      K2O, K2P, K2Q, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L,      K3N,                     \
    K4A, K4B, K4C,      K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L,      K4N,           K4P,      \
    K5A, K5B, K5C,                K5G,                     K5L, K5M, K5N,      K5O, K5P, K5Q  \
) { \
/*             0         1         2         3         4         5         6         7         8         9         10        11        12        13        14        15        16   */ \
/* 0 */   { KC_##K0A, KC_NO,    KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, KC_##K0P, KC_##K0Q}, \
/* 1 */   { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, KC_##K1P, KC_##K1Q}, \
/* 2 */   { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_##K2O, KC_##K2P, KC_##K2Q}, \
/* 3 */   { KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_NO,    KC_##K3N, KC_NO,    KC_NO,    KC_NO   }, \
/* 4 */   { KC_##K4A, KC_##K4B, KC_##K4C, KC_NO,    KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_NO,    KC_##K4N, KC_NO,    KC_##K4P, KC_NO   }, \
/* 5 */   { KC_##K5A, KC_##K5B, KC_##K5C, KC_NO,    KC_NO,    KC_NO,    KC_##K5G, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K5L, KC_##K5M, KC_##K5N, KC_##K5O, KC_##K5P, KC_##K5Q} \
}
