char val;
int led1 = 8;
int led2 = 9;

int photoRes = 0;

unsigned long lastConnectionTime = 0;
const unsigned long postingInterval = 1000;

void setup() {

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(Serial.available()){

    val = Serial.read();
  }

  if(val == '1'){
    
    digitalWrite(led1, HIGH);
  }

  if(val == 'q'){

    digitalWrite(led1, LOW);
  }

    if(val == '2'){
    
    digitalWrite(led2, HIGH);
  }

  if(val == 'w'){

    digitalWrite(led2, LOW);
  }

  delay(100);
  
  if(millis()-lastConnectionTime > postingInterval){

    int analog_A = analogRead(photoRes);
    Serial.print("Sensor Reading: ");
    Serial.println(analog_A);
    lastConnectionTime = millis();
  }
  
}
