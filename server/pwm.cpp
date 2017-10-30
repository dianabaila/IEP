#include "pwm.h"
#include "bcm2835.h"


/**********  creare clasa PWM  **********/

PWM::PWM(int freq, int gainFactor)
{
    this -> freq = freq;
    this -> gainFactor =  gainFactor;
    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);

}

int PWM::getFr()
{
    return freq;

}

int PWM::getGain()
{
    return gainFactor;

}

void PWM::setFr(int freq)
{
    this -> freq = freq;
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);

}

void PWM::setGain(int gainFactor)
{
    this -> gainFactor =  gainFactor;
    bcm2835_pwm_set_data(PWM_CHANNEL, (this -> freq * this -> gainFactor)/100);
}
