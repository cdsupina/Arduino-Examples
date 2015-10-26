#include <Servo.h>

int servoPin = 7;

Servo servo1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo1.write(0);
  delay(500);
/*
  servo1.write(90);
  delay(5000);
*/
  servo1.write(180);
  delay(500);
}
