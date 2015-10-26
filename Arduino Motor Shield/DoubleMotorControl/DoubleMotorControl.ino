void setup() {
  // put your setup code here, to run once:

  //Setup channel A
  pinMode(12, OUTPUT); //Instantiates motor Channel A pin
  pinMode(9, OUTPUT); //Instantiates brake Channel A pin

  //Setup channel A
  pinMode(13, OUTPUT); //Instantiates motor Channel B pin
  pinMode(8, OUTPUT); //Instantiates brake Channel B pin
}

void loop() {
  // put your main code here, to run repeatedly:

  //Motor A forward @ full speed
  digitalWrite(12, HIGH); //Establishes forward ditection of Channel A
  digitalWrite(9, LOW); //Disengages brake for Channel A
  analogWrite(3, 255); //Spins the motor on Channel A at full speed

  //Motor B forward @ full speed
  digitalWrite(13, HIGH); //Establishes forward ditection of Channel B
  digitalWrite(8, LOW); //Disengages brake for Channel B
  analogWrite(11, 255); //Spins the motor on Channel B at full speed
  
  delay(3000);

  digitalWrite(9, HIGH); //Engage brake for Channel A
  digitalWrite(8, HIGH); //Engage brake for Channel B
  
  delay(1000);

  //Motor A backward @ half speed
  digitalWrite(12, LOW); //Establishes forward ditection of Channel A
  digitalWrite(9, LOW); //Disengages brake for Channel A
  analogWrite(3, 123); //Spins the motor on Channel A at full speed

  //Motor B backward @ half speed
  digitalWrite(13, LOW); //Establishes forward ditection of Channel A
  digitalWrite(8, LOW); //Disengages brake for Channel A
  analogWrite(11, 123); //Spins the motor on Channel A at full speed

  delay(3000);

  digitalWrite(9, HIGH); //Engage the brake for Channel A
  digitalWrite(8, HIGH); //Engage brake for Channel B
  
  delay(1000);
}
