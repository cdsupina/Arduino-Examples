int led_1 = 8;
int led_2 = 10;

int toggle_1 = 6;
int toggle_2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);

  pinMode(toggle_1, INPUT);
  pinMode(toggle_2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(toggle_1) && digitalRead(toggle_2)){

    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);

    delay(500);

    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
     
    delay(500);
  }else if(digitalRead(toggle_1)){

    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
  }else if(digitalRead(toggle_2)){

    digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH);
  }else{

   digitalWrite(led_1, HIGH);
   digitalWrite(led_2, HIGH);
  }
}
