void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // makes Red LED blink for 5 times with a half of second break each time
  for (int i = 1; i <= 5; i++)
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }

  // makes (Green) LED blink for 10 times with a half of second break each time
  for (int i = 1; i <= 10; i++)
  {
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
  }

  // makes (Blue) LED blink for 15 times with a half of second break each time
  for (int i = 1; i <= 15; i++)
  {
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }
}
