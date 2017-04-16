#include <Keyboard.h>

// This script will dump a python dictionary which contains
// keymap scancodes to characters.
// I didn't escape before ' and \ (since that's keymap dependant, so do that before, depending on the keymap, some more cleanup will be nessecary (like fixing ' that were deleted by DEL keycode, etc...
// Program your BeetleBadUSB with this, select the keyboard layout you want to use, focus on a text editor and plug in the stick.


void setup(){
  Keyboard.begin();
  delay(5000);

   Keyboard.print("keymap = {\n");
   delay(30);
  for ( int i=32; i <= 190; i++ )
  {

    Keyboard.print(" ");
    delay(30);
    Keyboard.print("'");
    delay(30);
    Keyboard.print(i);
    delay(30);
    Keyboard.print("'");
    delay(30);    
    Keyboard.print(":");
    delay(30);
    Keyboard.print("'");
    delay(30);
    Keyboard.write(i);
    delay(30);
    Keyboard.print("'");
    delay(30);
    Keyboard.print(",");
    delay(30);
    Keyboard.print("\n");
    delay(30);
    
  }

   Keyboard.print("}");
   delay(30);
   Keyboard.end();
}


void loop(){}
