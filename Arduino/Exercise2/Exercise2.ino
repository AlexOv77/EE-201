void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(700);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(1000);
}
