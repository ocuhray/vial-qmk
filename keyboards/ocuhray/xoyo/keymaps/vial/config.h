// Copyright 2024 ocuhray (@ocuhray)
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

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

#define VIAL_KEYBOARD_UID {0x59, 0xA1, 0x16, 0x89, 0x5B, 0x71, 0xAD, 0x41}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
