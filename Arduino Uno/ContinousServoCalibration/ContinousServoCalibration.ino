#include <Servo.h>

int servoPin = 8;

Servo servo1;
int servoSpeed = 90;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);
}

void loop() {
servo1.write(servoSpeed);
}
