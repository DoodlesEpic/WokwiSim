const int RED = PB4;
const int YELLOW = PB3;
const int GREEN = PB5;

void setup() {
  pinMode(RED,  OUTPUT);
  pinMode(YELLOW,  OUTPUT);
  pinMode(GREEN,  OUTPUT);
}

void loop() {
  semaphor(HIGH, LOW, LOW);
  delay(3000);
  semaphor(LOW, HIGH, LOW);
  delay(3000);
  semaphor(LOW, LOW, HIGH);
  delay(3000);
}

void semaphor(int red, int yellow, int green) {
  digitalWrite(RED,  red);
  digitalWrite(YELLOW,  yellow);
  digitalWrite(GREEN,  green);
}
