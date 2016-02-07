/*************************************************** 
  This sketch uses 2 leds and 2 digital input buttons
  
  Written by Carlo Supina
 ****************************************************/

// Connect a lead on both buttons to ground with a 220 ohm resistor and to it's appropriate digital IO pin (6 and 7).
// Connect the other lead on both buttons to Vcc
// Connect anode on both LED's to it's appropriate digital IO pin (8 and 10).
// Connect cathode on both LED's to ground with a 100 ohm resistor.

int led_1 = 8;
int led_2 = 10;

int toggle_1 = 6;
int toggle_2 = 7;

void setup() {
  
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);

  pinMode(toggle_1, INPUT);
  pinMode(toggle_2, INPUT);
}

void loop() {
  
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
