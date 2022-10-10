#include <Arduino.h>
#include "siren.h"
#include "headlights.h"

void setup() {
    sirenSetup(); 
    headlightsSetup();
}

void loop() {
    sirenLoop();
    headlightsLoop();
}