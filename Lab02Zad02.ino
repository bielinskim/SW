bool diodeOn;
bool switchState;
bool oldSwitchState;

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
    }
    else {
      //obsluga zbocza rosnacego
    }
  }
  if(diodeOn) {
    PORTD = B01001010;
  }
  else {
    PORTD = B01000000;
  }
}
