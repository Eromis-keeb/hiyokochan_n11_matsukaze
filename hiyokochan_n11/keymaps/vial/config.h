// Copyright 2024 eromis (@kumasan555)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* #define MATRIX_ROWS 4 */
/* #define MATRIX_COLS 12 */

#define VIAL_KEYBOARD_UID {0x60, 0x55, 0x1A, 0x33, 0x0E, 0x93, 0x8E, 0x22}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

#define RGB_MATRIX_LED_COUNT 14
// #define MAX_LAYER 16

// #define DEBOUNCE 5
