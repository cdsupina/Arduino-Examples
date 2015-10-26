int pingPin = 7;
int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration;
  long in;
  long cm;

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  in = msToIn(duration);
  cm = msToCm(duration);

  Serial.print(in);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  digitalWrite(ledPin, withinRange(15, cm));
  
  delay(100);
}

long msToIn(long microseconds){

  return (microseconds/74)/2;
}

long msToCm(long microseconds){

  return (microseconds/29)/2;
}

bool withinRange(long range, long distance){

  if(distance <= range){

    return true;
  }else{
    
    return false;  
  }
}
