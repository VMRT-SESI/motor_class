#include "motor.h"

motor motorA(
  6,
  7
);

void setup(){
  Serial.begin(9600);
}

void loop() {
  motorA.run(100);
  delay(2500);
  motorA.run(-100);
}