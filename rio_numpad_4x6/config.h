// Copyright 2024 ivan-rio (@ivan-rio)
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

#define WS2812_DI_PIN F6
#define RGBLED_NUM 17
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_DEFAULT_HUE 106
#define RGBLIGHT_HUE_STEP 2

#define ENCODERS_PAD_A { F7, B3 }
#define ENCODERS_PAD_B { B1, B2 }
