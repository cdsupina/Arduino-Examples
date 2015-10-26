int led = 13;
int button = 7;
int val  = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(button);
  digitalWrite(led, val);
}

