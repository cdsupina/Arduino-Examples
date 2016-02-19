#include <AccelStepper.h>
#include <MultiStepper.h>

AccelStepper stepper(1,9,8);

int pos = 5000;

void setup() {
  // put your setup code here, to run once:
  stepper.setMaxSpeed(8000);
  stepper.setAcceleration(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if(stepper.distanceToGo() == 0){

    delay(500);
    pos = -pos;
    stepper.moveTo(pos);
    
  }
  
  
  stepper.run();
 

}
