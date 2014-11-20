/*
  Maze_Game.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */
/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int xcoord = 3;
int ycoord = 4;                  //Global variables go here


void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();    // Required code, line 2 of 2.
}

void walls()
{
   DrawPx(0,1,White);
    DrawPx(0,2,White);
    DrawPx(1,3,White);
    DrawPx(1,4,White);
    DrawPx(1,5,White);
    DrawPx(1,6,White);
    DrawPx(1,8,White);
    DrawPx(2,0,White);
    DrawPx(3,2,White);
    DrawPx(3,3,White);
    DrawPx(3,5,White);
    DrawPx(3,8,White);
    DrawPx(4,1,White);
    DrawPx(4,2,White);
    DrawPx(4,5,White);
    DrawPx(4,6,White);
    DrawPx(4,7,White);
    DrawPx(5,2,White);
    DrawPx(5,3,White);
    DrawPx(6,0,White);
    DrawPx(6,1,White);
    DrawPx(6,2,White);
    DrawPx(6,5,White);
    DrawPx(6,7,White);
    DrawPx(7,4,White);
    DrawPx(7,5,White);
    
    DisplaySlate();
}

void loop()                //Runs repeatedly
{
   CheckButtonsDown();
   
   if (Button_Right)            //If Right button pressed, move one right
   {
     if (xcoord < 7)
       xcoord = xcoord + 1;    
     else 
       xcoord = 0;
       
   }
   
   if (Button_Left)             //If Left button pressed, move one left
   {
     if (xcoord > 0)
     {
       if(ReadPx(xcoord - 1, ycoord) == White)
       {
         xcoord - 1;
       }
       else
       {
         if (xcoord > 0)
           xcoord = xcoord - 1;
         else
           xcoord = 7;
       }
     
     }
   }
   
   if (Button_Up)                 //If Up button pressed, move one up
   {
     if (ycoord < 7)
       ycoord = ycoord + 1;
       
     else
       ycoord = 0;
   }
   if (Button_Down)            
   {
     if (ycoord > 0)
       ycoord = ycoord - 1;
       
     else 
       ycoord = 7;
       
   
   }
   
   walls();
   
   DrawPx(xcoord,ycoord,Red);        //Draws Dot
   DisplaySlate();
   delay(150);
   ClearSlate();
   
}







