int led_pin=3;
int poten=0;

void setup()
{
  pinMode(led_pin, OUTPUT);

}

void loop()
{
  int val=analogRead(poten);
  val=map(val,1,1024,1,255);
  analogWrite(led_pin,val);
  	
}
