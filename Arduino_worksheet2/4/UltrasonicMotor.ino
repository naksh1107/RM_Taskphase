int s;
long duration;
int distanceCM;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(6, LOW);
  delay(2);
  digitalWrite(6, HIGH);
  delay(10);
  digitalWrite(6, LOW);

  duration=pulseIn(5, HIGH);
  distanceCM=duration*0.034/2;
  if(distanceCM>10){
  	distanceCM=map(distanceCM,1,400,1,255);
  	analogWrite(10, distanceCM);
  }
  else if(distanceCM<10){
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
  }
}
