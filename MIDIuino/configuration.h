/*
 * MIDIuino Main Configuration File
 * 
 * github/bredbord 2020
 * Last updated: 6/26/20
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////
///--------------------------------MAIN CONFIGURATION----------------------------------///
//////////////////////////////////////////////////////////////////////////////////////////

//BOARD SECTION---------------------------------------------------------------------------

#define ARDUINO_UNO  // Uncomment if using Arduino Uno board
//#define ARDUINO_MEGA  // Uncomment if using Arduino Mega board


//Basic Control Section-------------------------------------------------------------------

#define NUM_BUTTONS 16  // total number of buttons on the controller
#define NUM_KNOBS 16 // total number of potentiometers (knobs) on the controller
#define NUM_ROT_ENCODERS 3  // total number of rotary encoders on the controller


//Lighting Section------------------------------------------------------------------------

//#define BUTTON_LIGHTING  //Uncomment to enable backlighing for all buttons
/* ::WARNING::
 *    if NUM_BUTTONS exceeds 16 and backlighting is enabled, then the program will default to using Adafruit NeoPixels as the source of lighting on pin 2.
 *    The total strip length will be equivilent to the number of configured buttons and each light in the strip sequence will correspond to the same light
 *    in the button sequence.
 *    For example: Button 0 (pin 22 on the Arduino Mega) will correspond to the first led on the strip (led 0), button 1 (pin 24) to the second led on the 
 *    strip (led 1) and so on.
 */


//Advanced--------------------------------------------------------------------------------
#define BAUDRATE 9600  //define controller baud rate
