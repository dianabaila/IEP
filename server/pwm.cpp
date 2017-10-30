#include "pwm.h"


/**********  creare clasa PWM  **********/

PWM::PWM(int freq, int gainFactor)
{
    this -> freq = freq;
    this -> gainFactor =  gainFactor;

}

int PWM::getFr()
{
    return freq;

}

int PWM::getGain()
{
    return gainFactor;

}

void PWM::set(int freq, int gainFactor)
{
    this -> freq = freq;
    this -> gainFactor =  gainFactor;
}

void PWM::increment()
{
    this ->gainFactor = this ->gainFactor + (0.1*this ->gainFactor);
}
