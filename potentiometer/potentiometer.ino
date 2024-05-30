int voltPin = A2;
int readVal;
float V2;
int delayT = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(voltPin);

  // V = I / R formula -> Ohm's law
  V2 = (5./1023.) * readVal;

  Serial.println(V2);
  delay(delayT);
}
