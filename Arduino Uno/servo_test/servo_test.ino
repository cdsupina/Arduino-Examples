#include <Servo.h>

Servo elbow;

int pot1 = A0;
int pot1Mid;
void setup() {

  Serial.begin(9600);
  pot1Mid = analogRead(A0);
  elbow.attach(9);
}

void loop() {

  int pot1Val = ((analogRead(A0)-pot1Mid)/10);
  Serial.print(pot1Val);
  Serial.print(" : ");
  Serial.println(analogRead(A0));

  
  if(pot1Val > 10){

    elbow.write(elbow.read()+1);
    delay(abs(pot1Val-70));
  }

  if(pot1Val < -10){

    elbow.write(elbow.read()-1);
    delay(abs(pot1Val+70));
  }
  
}
