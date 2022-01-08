int led=8;
void setup()
{
 pinMode(led,OUTPUT);
}

void loop()
{
  for(int i=1;i<4;i++){
    digitalWrite(led, HIGH);
    delay(i*1000);
    digitalWrite(led, LOW);
    delay(1000);
    
    
}
}