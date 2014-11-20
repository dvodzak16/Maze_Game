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




void loop()                //Runs repeatedly
{
  
   
   
   DrawPx(xcoord,ycoord,Red);        //Draws Dot
   DisplaySlate();
   delay(150);
   ClearSlate();
   CheckButtonsDown();
    DrawPx(0,1,5);
    DrawPx(0,2,5);
    DrawPx(1,3,5);
    DrawPx(1,4,5);
    DrawPx(1,5,5);
    DrawPx(1,6,5);
    DrawPx(1,8,5);
    DrawPx(2,0,5);
    DrawPx(3,2,5);
    DrawPx(3,3,5);
    DrawPx(3,5,5);
    DrawPx(3,8,5);
    DrawPx(4,1,5);
    DrawPx(4,2,5);
    DrawPx(4,5,5);
    DrawPx(4,6,5);
    DrawPx(4,7,5);
    DrawPx(5,4,5);
    DrawPx(6,0,5);
    DrawPx(6,1,5);
    DrawPx(6,2,5);
   
    DrawPx(6,7,5);
    DrawPx(7,4,5);
    DrawPx(7,5,5);
   
   
   
   if (Button_Right)            //If Right button pressed, move one right
   {
     if(ReadPx(xcoord+1,ycoord)==5){
     }
     else
       xcoord++;
   }
   {
     if(xcoord > 7)
     {
       xcoord=7;
     }
   }
   
  
      if (Button_Left)        //If Left button pressed, move one left
      {  
        if(ReadPx(xcoord-1,ycoord)==5){
        }
        else
          xcoord--;
      }
      {
        if (xcoord < 0)
        {
          xcoord = 0;
        }
      }
    
   
   
   if (Button_Up)                 //If Up button pressed, move one up
   {
     if(ReadPx(xcoord,ycoord+1)==5){
     }
     else
       ycoord++;
   }
   {
     if (ycoord > 7)
     {
       ycoord = 7;
     }
     else
       ycoord+1;
   }
   
   if (Button_Down)
  {
    if(ReadPx(xcoord,ycoord-1)==5) {       
 }
     else
       ycoord--;
  }
    {
     if (ycoord < 0)
   {
       ycoord = 0;
   }
     else 
       ycoord-1;
   }
  
}







