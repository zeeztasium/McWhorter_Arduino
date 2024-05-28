int redPin = 9;
int bright = 255;
int dull = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i <= 8; i++) {
    bright = pow(2, i) - 1;

    analogWrite(redPin, bright);
    delay(500);
  }
  delay(5000);
  
  for (int i = 8; i >= 0; i--) {
    bright = pow(2, i) - 1;

    analogWrite(redPin, bright);
    delay(500);
  }
  delay(5000);
}
