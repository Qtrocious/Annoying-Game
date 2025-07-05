const int buttons[4] = {26, 27, 28, 29}; 
const int leds[4] = {6, 7, 0, 1};
const int buzz1 = 3;
const int buzz2 = 4;



void setup() {
  // put buttons[2] setup code here, to run once:
   for (int i =0; i<4; i++) {
    pinMode(buttons[i], INPUT_PULLUP);
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
  
  pinMode(buzz1, OUTPUT);
  pinMode(buzz2, OUTPUT);
  digitalWrite(buzz1, LOW);
  digitalWrite(buzz2, LOW);

}


void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttons[0] == LOW)) && (digitalRead(buttons[1]== LOW)) && (digitalRead(buttons[2]= LOW)) && (digitalRead(buttons[3] == LOW)) {
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], HIGH);
  } else if (digitalRead(buttons[0] == HIGH)) && (digitalRead(buttons[1] == LOW)) && (digitalRead(buttons[2]== LOW)) && (digitalRead(buttons[3]= LOW)) {
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
    delay(500);
    digitalWrite(buzz1, HIGH);
    digitalWrite(buzz2, HIGH);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], HIGH);
  } else if (digitalRead(buttons[0] == HIGH)) && (digitalRead(buttons[1] == HIGH)) && (digitalRead(buttons[2] == LOW)) && (digitalRead(buttons[3] == LOW)) {
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
    delay(1000);
    digitalWrite(buzz1, HIGH);
    digitalWrite(buzz2, HIGH);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], HIGH);
  } else if (digitalRead(buttons[0] == HIGH)) && (digitalRead(buttons[1] == HIGH)) && (digitalRead(buttons[2] == HIGH)) && (digitalRead(buttons[3] == LOW)) {
    delay(100);
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, HIGH);
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
    delay(100);
    digitalWrite(buzz1, HIGH);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], LOW);
    delay(100);
  } else if (digitalRead(buttons[0] == HIGH)) && (digitalRead(buttons[1] == HIGH)) && (digitalRead(buttons[2] == HIGH)) && (digitalRead(buttons[3] == HIGH)) {
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], HIGH);
    delay(100);
    digitalWrite(buzz1, HIGH);
    digitalWrite(buzz2, HIGH);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    digitalWrite(leds[3], LOW);
    delay(100);
    digitalWrite(buzz1, LOW);
    digitalWrite(buzz2, LOW);
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[3], HIGH);
  }
}