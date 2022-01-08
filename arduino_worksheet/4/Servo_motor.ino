#include <Servo.h>

Servo servo_9;
int angle;
void setup()
{
  servo_9.attach(9);
  Serial.begin(9600);
  servo_9.write(0);
  Serial.println("Enter the angle");
  while(Serial.available()==0){
  }
  angle=Serial.parseInt();
  
  

}

void loop()
{
  
  servo_9.write(angle);
  
  
}
