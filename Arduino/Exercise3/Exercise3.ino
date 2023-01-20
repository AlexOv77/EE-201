void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(10)){
    Serial.println("Hello World!");
  }
  else {
    Serial.println("It's 2023");
  }
}
