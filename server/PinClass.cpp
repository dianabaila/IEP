#include "PinClass.h"

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
}

void Pin::set(int value)
{
    if(pinDir == 1){
        State = value;
    }else{

    }
}

void Pin::change(){
    if(pinDir == 1){
        pinDir = 0;
    }else{
        pinDir = 1;
    }
}
