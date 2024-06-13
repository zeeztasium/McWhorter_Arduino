String prompt = "What is the radius of a circle?";
String result = "The Area of a circle is: ";
float pi = 3.14;
float area;
float radius;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(prompt);

  // loop breaks if only input is read
  while (Serial.available() == 0) { }

  // formula: Area = Pi * radius^2

  // once input has been read, we are calling parseFloat() function of Serial to convert the input
  radius = Serial.parseFloat();

  area = pi * radius * radius;

  Serial.print(result);
  Serial.println(area);
}
