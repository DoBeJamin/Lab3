/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab3/src/Lab3.ino"


void setup();
void loop();
#line 3 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int blue = 255;
int green = 255;
int red = 255;

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D3, OUTPUT);
  
}


void loop() {
  blue -= 1;
  if (!blue) {
    blue = 255;
    green -= 1;
    if (!green) {
      red -= 1;
      green = 255;
      if (!green) {
        green = 255;
      }
    }
  }

  analogWrite(D7,red); 
  analogWrite(D6,green); 
  analogWrite(D3,blue); 


}