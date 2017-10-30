#ifndef PWM_H
#define PWM_H


class PWM
{
    private:
        int freq;
        int gainFactor;

    public:
        PWM(int freq,int gainFactor);
        void set(int freq, int gainFactor);
        void increment();
        int getFr();
        int getGain();
};

#endif // PWM_H
