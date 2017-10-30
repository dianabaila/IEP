#include "PinClass.h"
#include "bcm2835.h"

/**********  creare clasa Pin  **********/

Pin::Pin(int pinNr,int pinDir,int State)
{
    this -> pinNr = pinNr;
    this -> pinDir =  pinDir;
    this -> State = State;
}

int Pin::get()
{
    return State;
     bcm2835_gpio_lev(this->pinNr);
}

void Pin::set(int value)
{
    if(pinDir == 1){
        State = value;
        bcm2835_gpio_write(this -> pinNr, HIGH);
    }else{
         bcm2835_gpio_write(this -> pinNr, LOW);
    }
}

void Pin::change(){
    if(pinDir == 1){
        pinDir = 0;
    }else{
        pinDir = 1;
    }
}
