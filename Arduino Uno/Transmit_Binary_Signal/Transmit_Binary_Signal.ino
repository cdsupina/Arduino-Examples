//Transmit binary signal through xBee

int button_1 = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button_1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(button_1);
  Serial.println(val);
  delay(50);
}
