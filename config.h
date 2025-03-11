/* Copyright 2023 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING           // Single color breathing
#define ENABLE_RGB_MATRIX_BAND_SAT            // Band of color with varying saturation
#define ENABLE_RGB_MATRIX_BAND_VAL            // Band of color with varying brightness

#define RGB_MATRIX_HUE_STEP 8     // How much the hue changes with each press
#define RGB_MATRIX_SAT_STEP 16    // How much the saturation changes
#define RGB_MATRIX_VAL_STEP 16    // How much the brightness changes
#define RGB_MATRIX_SPD_STEP 16    // How much the speed changes

#define COLOR_COUNT 8

#define MAX_DEFERRED_EXECUTORS 10

#define TAPPING_TERM 150 // Tapping term for SM_TD
