


int potLR = 2;
int potUD = 3;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Left-Right: ");
  Serial.print(analogRead(potLR));
  Serial.print(" Up-Down: ");
  Serial.print(analogRead(potUD));
  Serial.println();
  delay(500);
}
