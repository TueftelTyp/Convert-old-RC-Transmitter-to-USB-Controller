 /*  
 *  NOTE: This sketch file is for use with Arduino Leonardo and Arduino Micro only. 
 *  Uses Joystick 1.0 library from Matthew Heironimus
 *  
 *  https://github.com/MHeironimus/ArduinoJoystickLibrary/tree/version-1.0
 */
#include "Joystick.h"
//connected Potentiometer
int axis[5] = {A0, A1, A2, A3, 10}; 

int currentButtonState0;
int lastButtonState0;
int currentButtonState1;
int lastButtonState1;
int currentButtonState2;
int lastButtonState2;
int currentButtonState3;
int lastButtonState3;
int currentButtonState4;
int lastButtonState4;
int currentButtonState5;
int lastButtonState5;
int currentButtonState6;
int lastButtonState6;
/*
int currentButtonState7;
int lastButtonState7;
int currentButtonState8;
int lastButtonState8;
int currentButtonState9;
int lastButtonState9;
int currentButtonState14;
int lastButtonState14;
int currentButtonState15;
int lastButtonState15;
int currentButtonState16;
int lastButtonState16;
 */

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
/*pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP)
  pinMode(15, INPUT_PULLUP)
  pinMode(16, INPUT_PULLUP);*/  

  // Initialize Joystick Library
  Joystick.begin();
  //debug
  //Serial.begin(9600);
}

void loop() {

  // record, whether the hat switch is pressed
  int hatSwitchPressedCount=0;
  
  // Read Switches
int currentButtonState0 = !digitalRead(0); // Button 0
  if (currentButtonState0 != lastButtonState0)
  {
  Joystick.setButton(0, currentButtonState0);
  lastButtonState0 = currentButtonState0;
  }
int currentButtonState1 = !digitalRead(1); // Button 1
  if (currentButtonState1 != lastButtonState1)
  {
  Joystick.setButton(1, currentButtonState1);
  lastButtonState1 = currentButtonState1;
  } 
int currentButtonState2 = !digitalRead(2); // Button 2
  if (currentButtonState2 != lastButtonState2)
  {
  Joystick.setButton(2, currentButtonState2);
  lastButtonState2 = currentButtonState2;
  }
int currentButtonState3 = !digitalRead(3); // Button 3
  if (currentButtonState3 != lastButtonState3)
  {
  Joystick.setButton(3, currentButtonState3);
  lastButtonState3 = currentButtonState3;
  } 
int currentButtonState4 = !digitalRead(4); // Button 4
  if (currentButtonState4 != lastButtonState4)
  {
  Joystick.setButton(4, currentButtonState4);
  lastButtonState4 = currentButtonState4;
  } 
int currentButtonState5 = !digitalRead(5); // Button 5
  if (currentButtonState5 != lastButtonState5)
  {
  Joystick.setButton(5, currentButtonState5);
  lastButtonState5 = currentButtonState5;
  }   
int currentButtonState6 = !digitalRead(6); // Button 6
  if (currentButtonState6 != lastButtonState6)
  {
  Joystick.setButton(6, currentButtonState6);
  lastButtonState6 = currentButtonState6;
  }  
 /*
  int currentButtonState7 = !digitalRead(7); // Button 7
  if (currentButtonState7 != lastButtonState7)
  {
  Joystick.setButton(7, currentButtonState7);
  lastButtonState7 = currentButtonState7;
  }   
  int currentButtonState8 = !digitalRead(8); // Button 8
  if (currentButtonState8 != lastButtonState8)
  {
  Joystick.setButton(8, currentButtonState8);
  lastButtonState8 = currentButtonState8;
  }  
  int currentButtonState9 = !digitalRead(9); // Button 9
  if (currentButtonState9 != lastButtonState9)
  {
  Joystick.setButton(9, currentButtonState9);
  lastButtonState9 = currentButtonState9;
  } 
  int currentButtonState14 = !digitalRead(14); // Button 14
  if (currentButtonState14 != lastButtonState14)
  {
  Joystick.setButton(14, currentButtonState14);
  lastButtonState14 = currentButtonState14;
  }  
  int currentButtonState15 = !digitalRead(15); // Button 15
  if (currentButtonState15 != lastButtonState15)
  {
  Joystick.setButton(15, currentButtonState15);
  lastButtonState15 = currentButtonState15;
  }  
  int currentButtonState16 = !digitalRead(16); // Button 16
  if (currentButtonState16 != lastButtonState16)
  }  
  
  */
  int y = (int)(analogRead(axis[0])/4-127.5);
  int x = (int)(analogRead(axis[1])/4-127.5);
  int r = (int)(analogRead(axis[2])/4);
  //int t = (int)(analogRead(axis[3])/4);
  int t = (int)(analogRead(axis[3])/4+127.5);
  int z = (int)(analogRead(axis[4])/4-127.5);
  
  Joystick.setXAxis(x);
  Joystick.setYAxis(y);
  Joystick.setRudder(r);
  Joystick.setThrottle(t);
  Joystick.setZAxis(z);
  //debug
  //Serial.print(t);
  delay(10);
}
