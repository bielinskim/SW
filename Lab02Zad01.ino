void setup() {
  	DDRD = B10111111;
  	PORTD = B01000000;
}

void loop() {
   
  if(bitRead(PIND, 6)  == 0) {
  	 PORTD = B01000010;
  }
  else {
     PORTD = B01000000;
  }
  
}
