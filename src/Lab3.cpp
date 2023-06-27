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

int color[3] = {255,255,255};

//interal varialbes
bool button_pressed = false;
int potentiometer;
int color_idx = 0;



void setup() {

  //initialize pins
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D3, OUTPUT);

  pinMode(D8, INPUT);
  pinMode(A5, INPUT);

}

void loop() {

  //changes what color is being updated when the button is pressed
  if (digitalRead(D8)) {
    button_pressed = true;
  } else if (button_pressed) {
    color_idx += 1;
    if (color_idx == 3) {
      color_idx = 0;
    }
    button_pressed = false;
  }

  // updates current color intensity
  potentiometer = analogRead(A5);
  color[color_idx] = static_cast<float>(potentiometer)*(255.0/4095.0);

  analogWrite(D7,color[0]); 
  analogWrite(D6,color[1]); 
  analogWrite(D3,color[2]); 

}