void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // to turn LED on.
  delay(1000);
  digitalWrite(13, LOW); // to turn LED off.
  delay(1000);
}
