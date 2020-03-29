void setup()
{
	DDRD = B11000111;
	PIND = B00111000;
   DDRB = B11111111;
	PORTB = B11110111;

  	Serial.begin(9600);
}

void loop()
{
  
  if(bitRead(PIND, 5)  == 0) {
  	 Serial.println("1");
    reset();
  }
  if(bitRead(PIND, 4)  == 0) {
  	 Serial.println("2");
    reset();
  }
  if(bitRead(PIND, 3)  == 0) {
  	 Serial.println("3");
    reset();
  }
}

void reset() {
  PORTB = B11110111;
  PIND = B00111000;
}
