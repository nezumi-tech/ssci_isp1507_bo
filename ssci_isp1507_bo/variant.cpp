/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7
  0,  // xtal 1
  1,  // xtal 2
  2,  // a0	SCK
  3,  // a1	MISO
  4,  // a2	SDA
  5,  // a3	SCL
  6,  //	TXD (Do not change)
  7,  //	MOSI

  // D8 - D13
  8,  //	RXD (Do not change)

  9,  // *NFC1
  10, // *NFC2

  11, // LED #1 (red)

  12, // *
  13, // *
  14, // *

  15, // *GPIO #15
  16, // *GPIO #16

  // function set pins
  17, // *
  18, // *SWO
  19, // *LED #2 (blue)(not connected)
  20, // *DFU
  21, // Reset
  22, // *Factory Reset
  23, // *N/A
  24, // *N/A

  25, // *
  26, // *
  27, // *GPIO #27
  28, // A4	
  29, // A5
  30, // A6	SPI_SS
  31, // *A7
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

