int redLED = 8;
int greenLED = 13;
int blueLED = 4;
int dit = 100;
int dah = 500;
int longW = 1000;

float redLED_pace = 1.0/5.0; // 5 times faster; NB DON'T FORGET TO PUT A DOT BETWEEN
int greenLED_pace = 10; // 10 times slower
int blueLED_pace = 15; // 15 times slower

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void morseCode(int LED, float pace) {
  // `S` code in morse alphabet
  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(LED, HIGH);
    delay(dit * pace);
    digitalWrite(LED, LOW);
    delay(dit * pace);
  }

  // `O` code in morse alphabet
  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(LED, HIGH);
    delay(dah * pace);
    digitalWrite(LED, LOW);
    delay(dah * pace);
  }

  // 'S' code in morse alphabet
  for (int i = 1; i <= 3; i++)
  {
    digitalWrite(LED, HIGH);
    delay(dit * pace);
    digitalWrite(LED, LOW);
    delay(dit * pace);
  }

  delay(longW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(redLED_pace);
  morseCode(redLED, redLED_pace);
  morseCode(greenLED, greenLED_pace);
  morseCode(blueLED, blueLED_pace);
}