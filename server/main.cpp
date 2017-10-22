// blink.c
//
// Example program for bcm2835 library
// Blinks a pin on an off every 0.5 secs
//
// After installing bcm2835, you can build this
// with something like:
// gcc -o blink blink.c -l bcm2835
// sudo ./blink
//
// Or you can test it before installing with:
// gcc -o blink -I ../../src ../../src/bcm2835.c blink.c
// sudo ./blink
//
// Author: Mike McCauley
// Copyright (C) 2011 Mike McCauley
// $Id: RF22.h,v 1.21 2012/05/30 01:51:25 mikem Exp $
#include <bcm2835.h>
#include <stdio.h>
// Blinks on RPi Plug P1 pin 11 (which is GPIO pin 17)
#define PIN RPI_GPIO_P1_11

class Pin
{
    public:
        Pin(int nr,bool dir, bool state);
        int nr;
        bool dir;
        bool state;
        void set(void);

        /*Constructor - funcționează la fel ca în Java și nu returnează niciun tip de date*/
        Pin::Pin(int nr,bool dir, bool state)
        {
            this->nr = nr;
            this->dir = dir;
            this->state = state;
        }

        /*Destructor - spre deosebire de Java, unde eliberarea memoriei se face implicit, în C++ memoria trebuie eliberată manual, dar doar pentru obiectele care au fost alocate dinamic (cele crete prin pointer cu new vor fi dealocate cu delete)*/
        Pin::~Pin(void)
        {

        }

        /*Metodă */
        void Pin::set(void)
        {

        }

        void Pin::ChangeDir()
        {
            if(RPI_BPLUS_GPIO_J8_05 == 0)
                RPI_BPLUS_GPIO_J8_05 = 1;
            else
                RPI_BPLUS_GPIO_J8_05 = 0;
        }

};

int main(int argc, char **argv)
{
    // If you call this, it will not actually access the GPIO
    // Use for testing
    bcm2835_set_debug(1);
    if (!bcm2835_init())
      return 1;
    // Set the pin to be an output
    bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);
    // Blink
    while (1)
    {
        // Turn it on
        bcm2835_gpio_write(PIN, HIGH);

        // wait a bit
        bcm2835_delay(500);

        // turn it off
        bcm2835_gpio_write(PIN, LOW);

        // wait a bit
        bcm2835_delay(500);
    }
    bcm2835_close();
    return 0;
}
