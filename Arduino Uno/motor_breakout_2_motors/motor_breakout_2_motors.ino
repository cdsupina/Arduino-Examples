int E1 = 5;
int M1 = 4;
int E2 = 6;
int M2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 255; i++){

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
    analogWrite(E1, i);
    analogWrite(E2, i);
    delay(30);
  }
  
}
