#include <Arduino.h>

#ifndef SIREN_H

#define SIREN_H
    
    void sirenLoop();
    void sirenSetup();
    void settone(int input);
    void one();
    void oneA();
    void two();
    void twoA();
    void three();
    void threeA();
    void four();

    void loopF(int spin,int epin,int dela);
    void loopR(int epin,int spin,int dela);

    void low();

#endif