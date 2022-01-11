
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int s=1;s<=255;s++){
  	analogWrite(10, s);
  	Serial.println(s);
  	delay(50);
    if(s==255){
  		for(int s=255;s>0;s--){
    	analogWrite(10, s);
  		Serial.println(s);
  		delay(50);
          
        }
    }
  }
      
  
}
