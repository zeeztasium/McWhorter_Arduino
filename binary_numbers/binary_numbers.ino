int pin4 = 1;
int pin3 = 6;
int pin2 = 11;
int pin1 = 13;

int switch4 = LOW;
int switch3 = LOW;
int switch2 = LOW;
int switch1 = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin4, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin1, OUTPUT);
}

/* loop function that shows a conversion of a decimal number into a binary one-enumerating from number 0 to 15 (included) */
void loop() {
  // put your main code here, to run repeatedly:
  
  int enumeration;
  for (int i = 0; i < 16; i++) {
    enumeration = i;
    
    switch1 = (enumeration % 2);
    enumeration /= 2;
    
    switch2 = (enumeration % 2);
    enumeration /= 2;
   
    switch3 = (enumeration % 2);
    enumeration /= 2;
    
    switch4 = (enumeration % 2);
    enumeration /= 2;

    digitalWrite(pin4, switch4);
    digitalWrite(pin3, switch3);
    digitalWrite(pin2, switch2);
    digitalWrite(pin1, switch1);  
    delay(1000);
  }
}