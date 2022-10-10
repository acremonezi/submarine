#include <Arduino.h>
#include "headlights.h"

int headlightsLED = 1;
int headlightsSWT = 0;

void headlightsSetup() {
  Serial.end();
  pinMode(headlightsSWT, INPUT_PULLUP);
  pinMode(headlightsLED, OUTPUT );
}


void headlightsLoop() {

// digitalWrite(headlightsLED, HIGH);
// delay(1000);
// digitalWrite(headlightsLED, LOW);
// delay(1000);

  if (digitalRead(headlightsSWT) == HIGH) {
    digitalWrite(headlightsLED, LOW);
  } else {
    digitalWrite(headlightsLED, (millis() / 100) % 2);
  }

}
