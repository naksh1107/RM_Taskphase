int s;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter the speed of the motor(0-255)");
  while(Serial.available()==0){

  }
  s=Serial.parseInt();
  Serial.println(s);
  analogWrite(10, s);
}
