#include <M5Stack.h>
#include "../lib/M5Servo.h"

#define PIN_SERVO 5

M5Servo servo;
void setup() { servo.attach(PIN_SERVO); }

void loop() {
  servo.write(0);
  delay(500);
  servo.write(90);
  delay(500);
}