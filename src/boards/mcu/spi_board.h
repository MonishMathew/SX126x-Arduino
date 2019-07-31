#ifndef _SPI_BOARD_H
#define _SPI_BOARD_H
#ifdef ESP32
#include "boards/mcu/esp32/spi_board.h"
#endif
#ifdef NRF52
#include "boards/mcu/nrf52832/spi_board.h"
#endif
#endif