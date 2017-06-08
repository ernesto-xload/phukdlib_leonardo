/*
 *  phukdlib for Arduino Leonardo
 *
 *  Based on Irongeek's PHUKD Library ver 0.4
 *
 *  http://sanchezpano.info
 *
 *  Version:		0.1
 *  Design:		Ernesto Sanchez
 *  Implementation:	Ernesto Sanchez
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef Phukd_h
#define Phukd_h
#include "Arduino.h"
#include "Keyboard.h"

extern void CommandAtRunBarMSWIN(char *SomeCommand); //Opens the run bar and executes the command. 
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
