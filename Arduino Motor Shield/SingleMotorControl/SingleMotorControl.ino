void setup() {
  // put your setup code here, to run once:

  //Setup channel A
  pinMode(12, OUTPUT); //Instantiates motor Channel A pin
  pinMode(9, OUTPUT); //Instantiates brake Channel A pin
}

void loop() {
  // put your main code here, to run repeatedly:

  //forward @ full speed
  digitalWrite(12, HIGH); //Establishes forward ditection of Channel A
  digitalWrite(9, LOW); //Disengages brake for Channel A
  analogWrite(3, 255); //Spins the motor on Channel A at full speed

  delay(3000);

  digitalWrite(9, HIGH); //Engage brake for Channel A

  delay(1000);

  //backward @ half speed
  digitalWrite(12, LOW); //Establishes forward ditection of Channel A
  digitalWrite(9, LOW); //Disengages brake for Channel A
  analogWrite(3, 123); //Spins the motor on Channel A at full speed

  delay(3000);

  digitalWrite(9, HIGH); //Engage the brake for Channel A

  delay(1000);
}
