

void setup()
{
	DDRD = B11000111;
	PORTD = B00111000;
   DDRB = B11111111;
	PORTB = B11110111;

  	Serial.begin(9600);
}

void loop()
{
  
  if(!bitRead(PIND, 5)) {
  	 Serial.println("1");
    PIND = B00111000;
   
  }
  if(!bitRead(PIND, 4)) 
   {
  	 Serial.println("2");
    PIND = B00111000;
    
  }
  if(!bitRead(PIND, 3)) {
  	 Serial.println("3");
    PIND = B00111000;
 
  }
}
