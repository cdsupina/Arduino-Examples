int flex1 = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(A0);

  float voltage = sensorVal*(5.0/1023.0);

  Serial.println(voltage);
}
