/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

#define KEYBOARD_SIDE SINGLE

#if   KEYBOARD_SIDE == RIGHT
#define DEVICE_NAME                         "Dactyl_R"                          /**< Name of device. Will be included in the advertising data. */
#elif KEYBOARD_SIDE == LEFT
#define DEVICE_NAME                         "Dactyl_L"                          /**< Name of device. Will be included in the advertising data. */
#else
#define DEVICE_NAME_M                         "Green Dactyl"                          /**< Name of device. Will be included in the advertising data. */
#endif

#define DEVICE_MODEL                        "Cherry_Dactyl_BLE"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "jamiehs"                      /**< Manufacturer. Will be passed to Device Information Service. */


#define KEYMAP( \
    k21, k11, k22, k12, k23, k13,        k15, k26, k16, k27, k17, k28, k18, \
    k41, k31, k42, k32, k43, k33,        k35, k46, k36, k47, k37, k48, k38, \
    k61, k51, k62, k52, k63, k53,        k55, k66, k56, k67, k57, k68, k58, \
    k81, k71, k82, k72, k83, k73,        k75, k86, k76, k87, k77, k88, k78, \
          k54, k74, k14, k44,            k25, k45, k65, k85, \
                 k34,                    k64, k84 \
) \
{ \
    { k11, k12, k13,KC_NO,k15, k16, k17, k18 }, \
    { k21, k22, k23, k14, k25, k26, k27, k28 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38 }, \
    { k41, k42, k43, k44, k45, k46, k47, k48 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58 }, \
    { k61, k62, k63, k64, k65, k66, k67, k68 }, \
    { k71, k72, k73, k74, k75, k76, k77, k78 }, \
    { k81, k82, k83, k84, k85, k86, k87, k88 } \
}


#endif /* KEYBOARD_CONFIG_H */
