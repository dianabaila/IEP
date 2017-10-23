#ifndef PIN_H
#define PIN_H


class Pin
{
    private:
        int pinNr;
        int pinDir;
        int State;

    public:
        Pin(int pinNr,int pinDir,int State);
        void set(int value);
        int get();
        void change();
};

#endif // PIN_H
