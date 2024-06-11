int pin = A2;
int pinLED = 9;
int readValue;
float voltage;
int quarterDelay = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(pinLED, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  readValue = analogRead(pin);
  voltage = (5./1023.) * readValue;

  Serial.print("Potentiometed voltage: ");
  Serial.println(voltage);

  if (voltage > 4.) 
    { digitalWrite(pinLED, HIGH); }
  else 
    { digitalWrite(pinLED, LOW); }

  delay(quarterDelay);
}
