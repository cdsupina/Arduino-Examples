int pirPin = 2;
int ledG = 8;
int ledR = 7;

void setup(){

  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop(){

  int pirVal = digitalRead(pirPin);

  if(pirVal == LOW){

    Serial.println("Motion Detected");
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, LOW);
    delay(2000);
  }else{

    digitalWrite(ledR, HIGH);
    digitalWrite(ledG, LOW);
  }
}
