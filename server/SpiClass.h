#include "AbstractSerial.h"
#include <stdint.h>


class SPI: public AbstractSerial
{
	 public:
            SPI(uint8_t bit_order, uint8_t spi_mode0, uint16_t spi_clock_divider, uint8_t spi_cs0, uint8_t HI_LO);
            uint8_t transfer();
}
