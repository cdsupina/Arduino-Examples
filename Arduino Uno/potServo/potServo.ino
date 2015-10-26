#include <Servo.h>

int servoPin = 9;
int potPin = 0;

Servo servo1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = 0;
  val = analogRead(potPin);

  servo1.write(map(val, 0, 1023, -2, 182));
  Serial.println(servo1.read());
}
