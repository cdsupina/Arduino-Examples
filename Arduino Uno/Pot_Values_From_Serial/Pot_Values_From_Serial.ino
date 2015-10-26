//works with the LinkIt One
//four potentiometers used, two for each joystick, one controlling the movement of the cart and the other controlling the movement of the "arm"
String potStr1;
String potStr2;
String potStr3;
String potStr4;

int pot1;
int pot2;
int pot3;
int pot4;

//keeps track of the pot string that the next Serial.read character will be concatonated to
int potIndex;

//keeps track of how many characters have been interated so that it can signal the potIndex to iterate
int charIndex;

void setup(){

  Serial.begin(9600);
  delay(1);
}

void loop(){

  //pot Strings assigned to empty values for each new set of serial data
  potStr1 = "";
  potStr2 = "";
  potStr3 = "";
  potStr4 = "";
  
  pot1 = 90;
  pot2 = 90;
  pot3 = 90;
  pot4 = 90;
  
  //indecies set to 0 for each new set of serial data
  potIndex = 0;
  charIndex = 0;
  
  //flushes out the serial data
  while(Serial.available() > 0){
  
    Serial.read();
  }
  
  //loop will not pass this point until there are values in the serial data
  while(Serial.available() == 0);
  
  //while there is serial data, the following code is executed
  while(Serial.available() > 0){
    
   charsToStrings();
  }
  
  stringsToIntegers();
  
  //values echoed...
  Serial.print("potStr1 = ");
  Serial.print(potStr1);
  Serial.print(" potStr2 = ");
  Serial.print(potStr2);
  Serial.print(" potStr3 = ");
  Serial.print(potStr3);
  Serial.print(" potStr4 = ");
  Serial.print(potStr4);
  Serial.println();
  
  //Servos and motors can be written to the pot1, pot2, pot3 and pot4 values
  Serial.print("pot1 = ");
  Serial.print(pot1);
  Serial.print(" pot2 = ");
  Serial.print(pot2);
  Serial.print(" pot3 = ");
  Serial.print(pot3);
  Serial.print(" pot4 = ");
  Serial.print(pot4);
  Serial.println();
  
}

void charsToStrings(){

   //incoming is set equal to the next character of serial data
    char incoming = Serial.read();
    
    //adds the character to the appropriate pot string depending on the pot index
    if(potIndex == 0){
    
      potStr1 = potStr1 + incoming;
    }else if(potIndex == 1){
    
      potStr2 = potStr2 + incoming;
    }else if(potIndex == 2){
    
      potStr3 = potStr3 + incoming;
    }else if(potIndex == 3){
    
      potStr4 = potStr4 + incoming;
    }
    
    //character index iterated
    charIndex ++;
    
    //if the character index is 3, the character index is reset and the potentiometer index is iterated
    if(charIndex == 3){
    
      charIndex = 0;
      potIndex ++;
    }
    
    delay(1);
}

void stringsToIntegers(){

  pot1 = potStr1.toInt();
  pot2 = potStr2.toInt();
  pot3 = potStr3.toInt();
  pot4 = potStr4.toInt();  
}
