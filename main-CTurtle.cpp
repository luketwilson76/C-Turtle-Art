/* L1: Loopy C-Turtles
 * C-Turtle Author: Jesse Walker-Schalder 
 * Original Code Author: Jesse Walker-Schalder and Jan Pearce
 * Modified by: Luke Wilson
 * Purpose: Make Turtle art and get fimilar with the C-turtle library
 * References: Jesse Walker-Schalder & Jan Pearce
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
#include <iostream>
#include <cstdlib> 
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
#include <iostream>
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::


int main() {
	char choice;				//ask user for input
	std::cout << "Do you like blue or yellow?\n";
	std::cin >> choice;
	ct::TurtleScreen scr;		//set up the turtle screen, speed, width						
	ct::Turtle turtle(scr);
	ct::Turtle turtle2(scr);
	turtle.hideturtle();
	turtle2.hideturtle();
	turtle.speed(ct::TS_FASTEST);
	turtle2.speed(ct::TS_FASTEST);
	turtle.width(3);
	turtle2.width(3);
	if (choice == 'b' || choice == 'B') {		// draws a whirlpool. i looked at jesse's code to make sure i did the if statement right
		turtle.write("welcome to the whirlpool!");
		for (int i = 0; i < 500; i++) {
			turtle.pencolor(i * 2);
			turtle.pencolor(i * 1.23);
			scr.bgcolor(i / 2);
			turtle.forward(i * .1);
			turtle.left(5);
			turtle2.pencolor(i * 2);
			turtle2.pencolor(i * 2);
			turtle2.forward(i * .1);
			turtle2.left(7);
		}
	}
	else{					//draws the sun
		turtle.penup();
		turtle.setposition(0, 200);
		turtle.write("welcome to the sun!");
		turtle.setposition(0, 0);
		turtle.pendown();
		turtle.width(90);
		turtle.pencolor(-500);
		turtle.forward(1);
		turtle.width(3);
		for (int i = 0; i < 300; i++) {
			scr.bgcolor(-i);
			turtle.pencolor(-i);
			turtle.forward(i/2);
			turtle.left(30);
		}
		scr.bgcolor(-200);
	}
	scr.exitonclick();			//can exit the screen then end the program
	return 0;
}