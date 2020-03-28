#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {11, 10, 9, 8};

byte colPins[ROWS] = {5, 4, 3};


Keypad kpd = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()
{
  	//pinMode(ledpin, OUTPUT);
  	//digitalWrite(ledpin,HIGH);
  	Serial.begin(9600);
}

void loop()
{
   char key = kpd.getKey();
  if(key)
  {
    switch(key)
      default:
    	Serial.println(key);
  }
  
}
