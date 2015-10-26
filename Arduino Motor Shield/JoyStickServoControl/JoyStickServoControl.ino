#include <Servo.h>

int potLR = 2;
int potUD = 3;

int servo1Pin = 2;
int servo2Pin = 4;

Servo servo1;
Servo servo2;

int LRInput;
int UDInput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  LRInput = 90;
  UDInput = 90;
  
  LRInput = analogRead(potLR);
  UDInput = analogRead(potUD);
  
  servo1.write(normalizeLR(LRInput));
  servo2.write(normalizeUD(UDInput));
}

int normalizeLR(int input){

  int output = 90;

  if(input <= 517){

    output = input/5.8090;
  }else if(input >= 525){

      output = input/5.64015;
  }

  return output;
}

int normalizeUD(int input){

  int output = 90;

  if(input <= 504){

    output = input/5.6629;
  }else if(input >= 512){

      output = input/5.65485;
  }

  return output;
}
