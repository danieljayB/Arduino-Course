// Example by Tom Igoe

import processing.serial.*;

// The serial port:
Serial myPort;
int ledState; 
int BX = width/2;
int BY = height/2;
int ballSize = 400;

void setup(){
  
  size(500,500);
// List all the available serial ports:
println(Serial.list());

// Open the port you are using at the rate you want:
myPort = new Serial(this, Serial.list()[16], 9600);

// Send a capital "A" out the serial port
}

void draw(){
  /*
  if(mouseX > BX-ballSize &&   mouseX < BX+ballSize
  && mouseY > BY-ballSize && mouseY < BY+ballSize ){
         ledState = 255; 
               myPort.write('H');

       }
       else {
         ledState = 0;
               myPort.write('L');

       }
  
  fill(ledState, 0,0);
  ellipse(width/2, height/2, ballSize, ballSize);
  
  */
  
  /*
   if (keyPressed) {
    if (key == 'h' || key == 'H') {
      myPort.write('H');
    }
  } else if (key == 'l' || key == 'L') {
      myPort.write('L');
  }
  */
}
