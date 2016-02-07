#include<Servo.h>

Servo servo1;
Servo servo2;

int potLR = A0;
int potLRMid;
int potLRZeroRange = 10;

int potUD = A1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(6);
  potLRMid = analogRead(potLR);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(potLR));
  Serial.println(potLRMid);

 // if(canMove(potLRMid, potLRZeroRange, analogRead(potLR))){

  //  servo1.write(map(analogRead(potLR),0,1023,0,179));
 // }

  servo1.write(map(analogRead(potLR),0,1023,0,179));
  
  servo2.write(map(analogRead(potUD),0,1023,0,179));
  delay(10);
}

boolean canMove(int mid, int range, int aRead){

  if(abs(aRead-mid) > range){

    return true;
  }else{

    return false;
  }
}


