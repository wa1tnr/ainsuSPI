/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_AUDIOIO_AUDIOOUT_H__
#define __MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_AUDIOIO_AUDIOOUT_H__

#include "common-hal/microcontroller/Pin.h"
#include "asf/sam0/drivers/tc/tc.h"

#include "extmod/vfs_fat_file.h"
#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    const mcu_pin_obj_t *pin;
    uint32_t frequency;
    uint8_t* buffer;

    // File playback specific:
    uint8_t* second_buffer;
    DmacDescriptor* second_descriptor;
    uint32_t file_length; // In bytes
    uint16_t data_start; // Where the data values start
    uint8_t bytes_per_sample;
    bool signed_samples;
    uint16_t last_loaded_block;
    uint32_t bytes_remaining;

    bool loop;
    uint32_t len;
    pyb_file_obj_t* file;
} audioio_audioout_obj_t;

void audioout_reset(void);

void audioout_background(void);

#endif // __MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_AUDIOIO_AUDIOOUT_H__
