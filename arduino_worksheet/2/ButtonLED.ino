int led_pin=13;
int button_pin=8;
int button_state=0;
void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
  
}

void loop()
{
  button_state=digitalRead(button_pin);
  
  if (button_state==HIGH){
    digitalWrite(led_pin,HIGH);
    
    
  }
  else{
    digitalWrite(led_pin,LOW);
    
  }
}
}
