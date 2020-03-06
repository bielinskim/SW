bool diodeOn;
bool switchState;
bool oldSwitchState;
int counter =0;

void setup()
{
  	DDRD = B10111111;
  	PORTD = B01000000;
}

void loop()
{
   
  switchState = bitRead(PIND, 6);
  
if (oldSwitchState != switchState) {
  
    oldSwitchState = switchState;
    delay(10);
    switchState = bitRead(PIND, 6);
    if(!switchState) {
     // obsługa zbocza malejacego
      diodeOn = !diodeOn;
      counter++;
    }
    else {
      //obsluga zbocza rosnacego
    }
	}
  if(counter == 1) {
    PORTD = B01000010;
  }
  if(counter == 2) {
   PORTD = B01000100; 
  }
  if(counter == 3) {
   PORTD = B01001000; 
  }
  if(counter == 4) {
    PORTD = B01000000;
    counter = 0;
  }
}
