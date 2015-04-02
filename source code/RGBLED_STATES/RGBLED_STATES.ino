int rgb_led [3] =  { 8, 9, 10}; // array of the RGB LED pins
int buttonPin = 3;
int states = 0;

void setup() {
  Serial.begin(9600);

  for (int rgbPins = 0; rgbPins < 4; rgbPins++) {
    pinMode(rgb_led[rgbPins], OUTPUT);
  }
  pinMode(buttonPin, INPUT);


}

void loop() {
  //for button 1= low and 0 = high
  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);


  switch (states) {

    case 1:
     if (buttonState == 1) {
      digitalWrite(rgb_led[0], LOW);
      digitalWrite(rgb_led[1], HIGH);
      digitalWrite(rgb_led[2], LOW);
     }
     else{
        digitalWrite(rgb_led[0], LOW);
        digitalWrite(rgb_led[1], LOW);
        digitalWrite(rgb_led[2], LOW);
        states = 2; 
     }
      break;

    case 2:
if (buttonState == 1) {
      digitalWrite(rgb_led[0], LOW);
      digitalWrite(rgb_led[1], LOW);
      digitalWrite(rgb_led[2], HIGH);
     }
     else{
        digitalWrite(rgb_led[0], LOW);
        digitalWrite(rgb_led[1], LOW);
        digitalWrite(rgb_led[2], LOW);
        states = 0; 
     }      
     break;

    default:
      if (buttonState == 1) {
        digitalWrite(rgb_led[0], HIGH);
        digitalWrite(rgb_led[1], LOW);
        digitalWrite(rgb_led[2], LOW);

      }
      else if ( buttonState==HIGH){
        digitalWrite(rgb_led[0], LOW);
        digitalWrite(rgb_led[1], LOW);
        digitalWrite(rgb_led[2], LOW);
        states = 1;

      }


  }
  delay(300);

}
