/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

// #define RGBLIGHT_SPLIT

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 300

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_STARTUP_HUE 231
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
    #define RGB_MATRIX_TYPING_MEATMAP_DECREASE_DELAY_MS 400
    // #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
    // #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
    #define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    // #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
    // #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10
    // EFFECTS
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
