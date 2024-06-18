String prompt = "What color LED would you want to light up? ";
int pin13 = 13;
int pin8 = 8;
int pin2 = 2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin13, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(prompt);

  while (Serial.available() == 0) { }

  String colorLED = Serial.readString();
  colorLED.trim();
  colorLED.toLowerCase();

  Serial.println(colorLED);
  lightup(colorLED);
}

void lightup(String colorLED) {
  digitalWrite(pin13, colorLED == "red" ? HIGH : LOW);
  digitalWrite(pin8, colorLED == "green" ? HIGH : LOW);
  digitalWrite(pin2, colorLED == "blue" ? HIGH : LOW);
}