void setup() {
  DDRD = B11000011;
  PORTD = B00111100;
  DDRB = B11111111;

  Serial.begin(9600);
}

void loop() {
  PORTB = B11110111;
  firstRow();
  PORTB = B11111011;
  secondRow();
  PORTB = B11111101;
  thirdRow();
  PORTB = B11111110;
  fourthRow();
}
void firstRow() {
  if (!bitRead(PIND, 5)) {
    Serial.println("1");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 4)) {
    Serial.println("2");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 3)) {
    Serial.println("3");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 2)) {
    Serial.println("A");
    delay(200);
    PIND = B00111100;
  }
}
void secondRow() {
  if (!bitRead(PIND, 5)) {
    Serial.println("4");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 4)) {
    Serial.println("5");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 3)) {
    Serial.println("6");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 2)) {
    Serial.println("B");
    delay(200);
    PIND = B00111100;
  }
}
void thirdRow() {
  if (!bitRead(PIND, 5)) {
    Serial.println("7");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 4)) {
    Serial.println("8");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 3)) {
    Serial.println("9");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 2)) {
    Serial.println("C");
    delay(200);
    PIND = B00111100;
  }
}
void fourthRow() {
  if (!bitRead(PIND, 5)) {
    Serial.println("*");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 4)) {
    Serial.println("0");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 3)) {
    Serial.println("#");
    delay(200);
    PIND = B00111100;
  }
  if (!bitRead(PIND, 2)) {
    Serial.println("D");
    delay(200);
    PIND = B00111100;
  }
}
