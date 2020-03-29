void setup()
{
  // 1
	DDRD = B11011111;
	PIND = B00100000;
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
}

void reset() {
  PORTB = B11110111;
  PIND = B00100000;
}
