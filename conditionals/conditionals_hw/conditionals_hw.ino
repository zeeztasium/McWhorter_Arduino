int pinGreen = 9;
int pinYellow = 7;
int pinRed = 3;

int analogPin = A3;
int readValue;
float voltage;

int quarter = 250;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinRed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  readValue = analogRead(analogPin);

  // defining voltage
  voltage = (5./1023.) * readValue;

  /* rudimentary way of illuminating colorful LEDs basing on voltage
  
  if (voltage < 3.) {
    digitalWrite(pinGreen, HIGH);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinRed, LOW);
  }

  else if (voltage >= 3. && voltage < 4.) {
    digitalWrite(pinGreen, LOW);
    digitalWrite(pinYellow, HIGH);
    digitalWrite(pinRed, LOW);
  }
  else {
    digitalWrite(pinGreen, LOW);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinRed, HIGH);
  }

  Serial.print("Potentiometer voltage: ");
  Serial.println(voltage);
  delay(quarter);
  
  */
  setPinStates(voltage);

  Serial.print("Potentiometer voltage: ");
  Serial.println(voltage);
  delay(quarter);
}

void setPinStates(float voltage) {
  digitalWrite(pinGreen, voltage < 3.0 ? HIGH : LOW);
  digitalWrite(pinYellow, (voltage >= 3.0 && voltage < 4.0) ? HIGH : LOW);
  digitalWrite(pinRed, voltage >= 4.0 ? HIGH : LOW);
}