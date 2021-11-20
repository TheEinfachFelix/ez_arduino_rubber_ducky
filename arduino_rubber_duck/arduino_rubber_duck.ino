//This is a very simple rubber ducky on an Arduino

//Warning This Script needs an Arduino that can use "Keyboard.h" like the Micro or Pro micro

//Here are general information about the lib like Functions
//https://www.arduino.cc/reference/en/language/functions/usb/keyboard/
//and here is a the table of the special keys
//https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
//-------------------------------------------------------------------------------------------------

//to start the script you need to connect pin 2 and ground

#include "Keyboard.h"
char winKey = KEY_LEFT_GUI;
int Counter = 0;

void setup() {
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  while (!digitalRead(2) == HIGH) {
    if (Counter == 0)
    {
      //del this to make it run it infinite
      Counter++;
      //ad here your owne code
      
      Keyboard.press(winKey);
      Keyboard.press('r');
      Keyboard.releaseAll();
      delay(100);
      Keyboard.println("cmd");
      delay(200);
      //opening cmd and then running comands

      Keyboard.println("tree");
      Keyboard.print("ur Computer has Virus");
    }
  }
}
