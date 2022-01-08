long duration;
int distanceCM;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(3, LOW);
  delay(2);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(3, LOW);

  duration=pulseIn(10, HIGH);
  distanceCM=duration*0.034/2;
  Serial.print("Distance in centimeter: ");
  Serial.print(distanceCM);
  Serial.println(" cm");
}
