void setup() {
  pinMode(PB4,  OUTPUT);
}

void loop() {
  digitalWrite(PB4,  HIGH);
  delay(1000);
  digitalWrite(PB4,  LOW);
  delay(1000);
}
