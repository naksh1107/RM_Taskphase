long duration;
int distanceCM;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(6, INPUT);
  pinMode(13,OUTPUT);
  
  
}

void loop() {
  digitalWrite(9, LOW);
  delay(2);
  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);

  duration=pulseIn(6, HIGH);
  distanceCM=duration*0.034/2;
  if(distanceCM>=0&&distanceCM<15){
    digitalWrite(13,LOW);
  }
  
  else if(distanceCM>=15&&distanceCM<50){
    digitalWrite(13,HIGH);
  }
  else if(distanceCM>=50){
    digitalWrite(13,LOW);
  }
}