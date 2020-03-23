void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop() {
  digitalWrite(2, 0);
  digitalWrite(3, 25 * 255 / 100);
  digitalWrite(5, 50 * 255 / 100);
  digitalWrite(6, 75 * 255 / 100);
  digitalWrite(7, 1);
}
