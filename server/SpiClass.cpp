#include "SpiClass.h"
#include "bcm2835.h"
#include <stdint.h>

SPI::SPI(uint8_t bit_order, uint8_t spi_mode0, uint16_t spi_clock_divider, uint8_t spi_cs0, uint8_t HI_LO)
{
    bcm2835_spi_setBitOrder(bit_order);
    bcm2835_spi_setDataMode(spi_mode0);
    bcm2835_spi_setClockDivider(spi_clock_divider);
    bcm2835_spi_chipSelect(spi_cs0);
    bcm2835_spi_setChipSelectPolarity(spi_cs0, HI_LO);
		
}

uint8_t SPI::transfer(uint8_t send_data)
{
    return bcm2835_spi_transfer(send_data);
}
