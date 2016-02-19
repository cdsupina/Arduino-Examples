/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;

char val;
boolean opened;
boolean closed;

int openSpeed = 30;

void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  openGripper();
}

void loop() {

  if(Serial.available()){

    val = Serial.read();
  }

  if(val == '1'){
    
    openGripper();
  }

  if(val == '2'){

    closeGripper();
  }

  Serial.println(myservo.read());
}


void closeGripper(){

  for (int pos = myservo.read(); pos >= 61; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos); 
    delay(openSpeed);
  }
}

void openGripper(){

  for (int pos = myservo.read(); pos <= 143; pos += 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos); 
    delay(openSpeed);
  }
}
