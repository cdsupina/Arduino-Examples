int number = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  number = 0;
  
  while(Serial.available() > 0){ //Flushes the recieving buffer
  
    Serial.read();
  }
  
  //Nothing is done if there is no data being sent through the Serial communication
  while(Serial.available() == 0); 
  
  //If there is data, excute this loop
  while(Serial.available() > 0){ 
  
    //stores the next byte in the byte variable: incoming
    byte incoming = Serial.read(); 
    
    if(incoming >= '0' && incoming <= '9'){
    
      //magic
      number = (number * 10) + (incoming - '0');  
      
      delay(5);
    }
    
   
  }
  
  
  Serial.print("number = ");
  Serial.println(number);
}
