#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1215
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jon Dupe
#define PRODUCT         MacroPad 5x2

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 2

/* define direct pins used */
#define DIRECT_PINS { { E6, D1 }, { B4, D0 }, { B5, D4 }, { B6, C6 }, { F7, D7 } }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
