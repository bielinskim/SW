bool diodeOn;
bool switchState;
bool oldSwitchState;
bool diodeOn2;
bool switchState2;
bool oldSwitchState2;
int counter =0;

void setup()
{
  	DDRD = B00111111;
  	PORTD = B11000000;
}

void loop()
{
   
  switchState = bitRead(PIND, 6);
  
  switchState2 = bitRead(PIND, 7);
  
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
  switchState2 = bitRead(PIND, 7);
  if (oldSwitchState2 != switchState2) {
  
    oldSwitchState2 = switchState2;
    delay(10);
    switchState2 = bitRead(PIND, 7);
    if(!switchState2) {
     // obsługa zbocza malejacego
      diodeOn2 = !diodeOn2;
      counter = 0;
    }
    else {
      //obsluga zbocza rosnacego
    }
}
  if(!switchState2) {
    PORTD = B11000000;
  }
  if(!switchState && counter == 1) {
    PORTD = B11000010;
  }
  if(!switchState && counter == 2) {
   PORTD = B11000100; 
  }
  if(!switchState && counter == 3) {
   PORTD = B11001000; 
  }
  if(!switchState && counter == 4) {
    PORTD = B11000000;
    counter = 0;
  }
}
