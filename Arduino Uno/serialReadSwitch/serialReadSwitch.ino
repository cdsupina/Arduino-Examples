int LED = 12;
int toggle = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(toggle, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(toggle));
digitalWrite(LED, digitalRead(toggle));
}
