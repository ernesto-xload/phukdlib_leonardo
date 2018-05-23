
#include "Arduino.h"
#include "Keyboard.h"
#include "phukdlib_leonardo.h"

/********************************************************************
 * Opens the run bar and executes the command. 
 ********************************************************************/
void CommandAtRunBarMSWIN(char *SomeCommand){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

/********************************************************************
 * Run the program with admin privileges. -Joel Serna Moreno
 ********************************************************************/
void RunProgramAdminMSWIN(char *SomeCommand){
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print(SomeCommand);
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

/********************************************************************
 * Minimize open windows. -Joel Serna Moreno
 ********************************************************************/
void MinimizeWindowMSWIN(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  delay(100);
  Keyboard.release('d');
}

/********************************************************************
 * Open the search box. -Joel Serna Moreno
 ********************************************************************/
void CommandOpenSearchMSWIN(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
}

/********************************************************************
 * Block active sessions. -Joel Serna Moreno
 ********************************************************************/
void BlockSessionMSWIN(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
}

/********************************************************************
 * Close active program. -Joel Serna Moreno
 ********************************************************************/
void CloseProgramsMSWIN(){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
}

/********************************************************************
 * Opens the run bar and executes the command. 
 ********************************************************************/
void CommandAtRunBarGnome(char *SomeCommand){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

/********************************************************************
 * Opens spotlight and executes the command. -Adam Baldwin
 ********************************************************************/
void CommandAtRunBarOSX(char *SomeCommand){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll(); 
}

/********************************************************************
 * Opens New Terminal and executes command. -Adam Baldwin
 ********************************************************************/
void CommandAtNewTerminal(char *SomeCommand){
  CommandAtRunBarOSX("Terminal");
/*
  // Open a new terminal in case another one was open
  delay(1000);
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_N);
  Keyboard.send_now(); // send strokes
  Keyboard.set_modifier(0); //prep release of  control keys
  Keyboard.set_key1(0); //have to do this to keep it from hitting key multiple times.
  Keyboard.send_now(); //Send the key changes
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.set_key1(KEY_ENTER); 
  Keyboard.send_now();    
  Keyboard.set_key1(0);
*/
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll(); 
}

/********************************************************************
 * Opens the run bar and executes the command. -Aaron Howell
 ********************************************************************/
void ShrinkCurWinOSX(){
/*
  Keyboard.set_modifier(MODIFIERKEY_GUI); //clover key
  Keyboard.set_key1(KEY_H); // clover-h hides window, clover-m minimizes window
  Keyboard.send_now();
  delay(250);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
*/
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(250);
}

/********************************************************************
 * Shrinks the active window to help hide it.
 ********************************************************************/
void ShrinkCurWin(){
/*
  Keyboard.set_modifier(MODIFIERKEY_ALT);
  Keyboard.set_key1(KEY_SPACE);
  Keyboard.send_now(); 
  delay(250);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();  
  Keyboard.print("n");
*/
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.print("n");
}

void ShrinkCurWinMSWIN(){
  ShrinkCurWin();
}

void ShrinkCurWinGnome(){
  ShrinkCurWin();
}

/********************************************************************
 * This function simplifies the pressing and releasing of a key.  
 ********************************************************************/
void PressAndRelease(int KeyCode,int KeyCount){
  int KeyCounter=0;
  for (KeyCounter=0;  KeyCounter!=KeyCount; KeyCounter++){
/*
    Keyboard.set_key1(KeyCode); // use r key
    Keyboard.send_now(); // send strokes
    Keyboard.set_key1(0); 
    Keyboard.send_now(); // send strokes
*/
    Keyboard.print(KeyCode);
  }
}

/*********************************************************************
 * ledkeys returns the setting of the "lock keys"
 * Num Lock = 1
 * CAPS Lock = 2
 * Scroll Lock = 4
 * Add them together to get combos, for example if all three are on, 7 would be the result
 *********************************************************************/
/*
int ledkeys(void)
{
  return int(keyboard_leds);
}
*/

/*********************************************************************
 * Returns TRUE if NUM Lock LED is on and FALSE otherwise. 
 *********************************************************************/
/*
boolean IsNumbOn(void)
{
  if ((ledkeys() & 1) == 1){
    return true;
  } 
  else {
    return false;
  }      
}
*/

/*********************************************************************
 * Returns TRUE if Caps Lock LED is on and FALSE otherwise. 
 **********************************************************************/
/*
boolean IsCapsOn(void)
{
  if ((ledkeys() & 2) == 2){
    return true;
  } 
  else {
    return false;
  }      
}
*/

/*********************************************************************
 * Returns TRUE if Scroll Lock LED is on and FALSE otherwise. 
 **********************************************************************/
/*
boolean IsScrlOn(void)
{
  if ((ledkeys() & 4) == 4){    
    return true;
  } 
  else {
    return false;
  }      
}
*/
//********************************************************************
