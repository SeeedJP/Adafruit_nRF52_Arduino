/*
 * variant.h
 * Copyright (C) Seeed K.K.
 * MIT License
 */

#pragma once

#include "WVariant.h"

////////////////////////////////////////////////////////////////////////////////
// Low frequency clock source

#define USE_LFXO    // 32.768 kHz crystal oscillator
// #define USE_LFRC    // 32.768 kHz RC oscillator

////////////////////////////////////////////////////////////////////////////////
// Number of pins

#define PINS_COUNT              (48)

////////////////////////////////////////////////////////////////////////////////
// Digital pin definition

#define D30                     (30)            // Grove - Digital (P1)
#define D31                     (31)            // Grove - Digital (P2)
#define D28                     (28)            // Grove - Analog (P1)
#define D29                     (29)            // Grove - Analog (P2)
#define D4                      (4)             // Grove - I2C (P1)
#define D5                      (5)             // Grove - I2C (P2)
#define D13                     (13)            // Grove - UART (P1)
#define D14                     (14)            // Grove - UART (P2)

////////////////////////////////////////////////////////////////////////////////
// Analog pin definition

#define A6                      (30)            // Grove - Digital (P1)
#define A7                      (31)            // Grove - Digital (P2)
#define A4                      (28)            // Grove - Analog (P1)
#define A5                      (29)            // Grove - Analog (P2)
#define A2                      (4)             // Grove - I2C (P1)
#define A3                      (5)             // Grove - I2C (P2)

////////////////////////////////////////////////////////////////////////////////
// UART pin definition

#define PIN_SERIAL1_RX          (13)            // Serial1 / Grove - UART (P1)
#define PIN_SERIAL1_TX          (14)            // Serial1 / Grove - UART (P2)

////////////////////////////////////////////////////////////////////////////////
// I2C pin definition

#define WIRE_INTERFACES_COUNT   (1)

#define PIN_WIRE_SCL            (4)             // Grove - I2C (P1)
#define PIN_WIRE_SDA            (5)             // Grove - I2C (P2)

////////////////////////////////////////////////////////////////////////////////
// SPI pin definition

#define SPI_INTERFACES_COUNT    (1)

#define PIN_SPI_MISO            (PINS_COUNT)    // No connection
#define PIN_SPI_MOSI            (PINS_COUNT)    // No connection
#define PIN_SPI_SCK             (PINS_COUNT)    // No connection

static const uint8_t SS = PINS_COUNT;           // No connection

////////////////////////////////////////////////////////////////////////////////
// Adafruit_SPIFlash
//   Avoid compile errors in Adafruit_FlashTransport_QSPI

#define PIN_QSPI_SCK            (PINS_COUNT)
#define PIN_QSPI_CS             (PINS_COUNT)
#define PIN_QSPI_IO0            (PINS_COUNT)
#define PIN_QSPI_IO1            (PINS_COUNT)
#define PIN_QSPI_IO2            (PINS_COUNT)
#define PIN_QSPI_IO3            (PINS_COUNT)

////////////////////////////////////////////////////////////////////////////////
// Builtin LEDs

#define LED_BUILTIN             (6)             // USER LED
#define LED_RED                 (LED_BUILTIN)
#define LED_BLUE                (PINS_COUNT)    // No connection

#define LED_STATE_ON            (1)             // 1:HIGH, 0:LOW

////////////////////////////////////////////////////////////////////////////////
// Builtin buttons

#define PIN_BUTTON1             (34)            // USER button

////////////////////////////////////////////////////////////////////////////////
// Power supply

#ifdef BOARD_VERSION_ES2
#define PIN_VSYS_3V3_ENABLE     (2)
#define PIN_DCDC_MODE           (16)
#endif // BOARD_VERSION_ES2
#define PIN_VGROVE_ENABLE       (3)

////////////////////////////////////////////////////////////////////////////////
// Cellular module

// Power Supply
#define PIN_VDD_EXT             (35)            // DI

// Turn On/Off
#define PIN_PWRKEY              (33)            // DO(OC)

// Reset
#ifdef BOARD_VERSION_1_0
#define PIN_RESET_N             (47)            // DO(OC)
#endif // BOARD_VERSION_1_0

// Main UART Interface
#define PIN_MAIN_DTR            (36)            // DO
#define PIN_MAIN_RXD            (25)            // DO
#define PIN_MAIN_TXD            (24)            // DI
#define PIN_MAIN_CTS            (26)            // DI
#define PIN_MAIN_RTS            (27)            // DO
#define PIN_MAIN_DCD            (40)            // DI
#define PIN_MAIN_RI             (8)             // DI
#define MAIN_UARTE              (NRF_UARTE1)
#define MAIN_UARTE_IRQn         (UARTE1_IRQn)
#define MAIN_UARTE_IRQHANDLER   UARTE1_IRQHandler

// Other Interface Pins
#define PIN_AP_READY            (37)            // DI

////////////////////////////////////////////////////////////////////////////////
// FeRAM

#define PIN_FERAM_CS            (20)            // CS
#define PIN_FERAM_SO            (22)            // MISO
#define PIN_FERAM_SI            (17)            // MOSI
#define PIN_FERAM_SCK           (19)            // SCLK
#define PIN_FERAM_WP            (23)            // WP
#define PIN_FERAM_HOLD          (21)            // HOLD
#define FERAM_SPI               (NRF_SPIM2)

#define FERAM_DEVICE_CONFIG                   \
    {                                         \
        .total_size = 64 * 1024,              \
        .start_up_time_us = 250,              \
        .manufacturer_id = 0x04,              \
        .memory_type = 0x26,                  \
        .capacity = 0x03,                     \
        .max_clock_speed_mhz = 8,             \
        .quad_enable_bit_mask = 0x00,         \
        .has_sector_protection = false,       \
        .supports_fast_read = false,          \
        .supports_qspi = false,               \
        .supports_qspi_writes = false,        \
        .write_status_register_split = false, \
        .single_status_byte = true,           \
        .is_fram = true,                      \
    }

#include <PseudoTime.h>
