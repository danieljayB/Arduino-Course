/*

----Example Dim an LED with a Photocell------
Daniel Bertner - Cooper Union Arduino Course

*/

int led = 9;
int photocell = A0; //pin our photocell is connected to
int value; //value of photocell

void setup() {
  
 Serial.begin(9600); //serial port speed
 pinMode(led, OUTPUT); //LED pin is outputting voltage

}

void loop() {

//read photocell val
value = analogRead(photocell); 

/*clamp photocell min/max.
adjust according to results in serial monitor.
test this with other sensors (i.e. potentiometer 0-1023,
ir sensor, ultrasonic sensor, rotary encoder, etc    */
value = constrain(value, 23, 244); 

//print our values from photocell
Serial.print("photocell value = "  );
Serial.println( value);

/* 0-255 is brightness range of LED
we only have range here of 23-244, so led value
needs to be less than our range 
we are locking out sensor range to a new number range that is 
passed to our "brightness" variable  */
int brightness = map(value, 23, 244, 0 , 200);

delay(10); //delays entire program 10/1000th millsecond.

analogWrite(led, brightness); //applied our brightness range to change with photocell val
}


