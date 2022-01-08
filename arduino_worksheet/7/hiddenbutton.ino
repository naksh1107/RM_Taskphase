int poten=0;
int trig=9;
int echo=6;
int led=2;
long duration;
int distanceCm;
int val;
int r1=random(1,20);


void setup()
{
  pinMode(led,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  Serial.println("Find the hidden button to switch on the light using the ultrasonic sensor, the button is in the range of the sensor");

}

void loop()
{
  
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  duration=pulseIn(echo, HIGH);
  distanceCm=duration*0.034/2;
  distanceCm=map(distanceCm,1,400,1,20);
  if(distanceCm==r1){
    digitalWrite(led,HIGH);
    Serial.println("LED is on");
    int val=analogRead(poten);
    val=map(val,1,1024,1,255);
    analogWrite(led,val);
    
    
  }
  
    
}