int s;
int s1;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter the speed of the first motor(0-255)");
  while(Serial.available()==0){

  }
  s=Serial.parseInt();
  Serial.println(s);
  analogWrite(10, s);
  Serial.println("Enter the speed of the second motor(0-255)");
  while(Serial.available()==0){

  }
  s1=Serial.parseInt();
  Serial.println(s1);
  analogWrite(6, s1);
}