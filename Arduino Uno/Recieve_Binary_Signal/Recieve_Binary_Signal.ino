//Recieve binary signal through xBee

int led_1 = 7;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0);
  
  int data = Serial.read() - '0';
  
  digitalWrite(led_1, data);
  
  Serial.flush();
}
