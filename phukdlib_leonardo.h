#ifndef Phukd_h
#define Phukd_h
#include "Arduino.h"
#include "Keyboard.h"

extern void CommandAtRunBarMSWIN(char *SomeCommand); //Opens the run bar and executes the command.
extern void RunProgramAdminMSWIN(char *SomeCommand); //Run the program with admin privileges.
extern void MinimizeWindowMSWIN(); //Minimize all windows.
extern void CommandOpenSearchMSWIN(); //Open the search command.
extern void BlockSessionMSWIN(); //Block active sessions.
extern void CloseProgramsMSWIN(); //Close active program.
extern void CommandAtRunBarGnome(char *SomeCommand);
extern void CommandAtRunBarOSX(char *SomeCommand);
extern void CommandAtNewTerminal(char *SomeCommand);
extern void ShrinkCurWinOSX();
extern void ShrinkCurWin();
extern void ShrinkCurWinMSWIN();
extern void ShrinkCurWinGnome();
extern void PressAndRelease(int KeyCode,int KeyCount);
extern void ShowDiag();
/*
extern volatile uint8_t keyboard_leds;
extern int ledkeys();
extern boolean IsNumbOn(void);
extern boolean IsCapsOn(void);
extern boolean IsScrlOn(void);
*/
#endif
