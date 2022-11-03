/*
Copyright 2021 Zach White

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBACA
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jerick
#define PRODUCT         RSlate
#define DESCRIPTION     "40% keyboard with underglow!"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS {D4,C6,D7,E6} 
#define MATRIX_COL_PINS {F4,F5,F6,F7,B1,B3,B2,B6,B4,B5}  

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define QMK_KEYS_PER_SCAN 40
#define USB_POLLING_INTERVAL_MS 0
#define FORCE_NKRO
#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 10
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
// RGB_Matrix settings
//#ifdef RGB_MATRIX_ENABLE
  #define ENABLE_RGB_MATRIX_KEYPRESSES // reacts to keypresses
  #define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
  #define RGB_MATRIX_VAL_STEP 8
  #define RGB_MATRIX_SPD_STEP 10
  /* Disable the animations you don't want/need.  You will need to disable a good number of these
    because they take up a lot of space.  Disable until you can successfully compile your firmware. */
   #define ENABLE_RGB_MATRIX_ALPHAS_MODS
  // #define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  #define ENABLE_RGB_MATRIX_BREATHING
  #define ENABLE_RGB_MATRIX_CYCLE_ALL
  #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
  #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #define ENABLE_RGB_MATRIX_DUAL_BEACON
  //#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
  //#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
  // #define DISABLE_RGB_MATRIX_RAINDROPS
  #define ENABLE_RGB_MATRIX_JELLYBEN_RAINDROPS
  # define ENABLE_RGB_MATRIX_TYPING_HEATMAP
  #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
  //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
  //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  //#define ENABLE_RGB_MATRIX_SPLASH
  #define ENABLE_RGB_MATRIX_MULTISPLASH
  //#define ENABLE_RGB_MATRIX_SOLID_SPLASH
  #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
//#endif //RGB_MATRIX_ENABLE
