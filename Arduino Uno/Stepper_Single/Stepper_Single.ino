#include <Stepper.h>

const int stepsPerRevolution = 48; //change to apppropriate value based on the motor

Stepper myStepper(stepsPerRevolution,8,9,10,11);

void setup() {
  //set the speed
  myStepper.setSpeed(1000);

  Serial.begin(9600);

}

void loop() {
  //Step one revolution in one direction
  Serial.println("Clockwise");
  myStepper.step(-stepsPerRevolution);
  delay(30);

  //Step one revolution in the other direction
  Serial.println("Counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(30);

}
