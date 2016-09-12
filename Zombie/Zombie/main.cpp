/* 
Create a class representing a zombie.
Each zombie should have a health and attack value, and a previous occupation.
Ensure that the zombie's variables are priated
	and there are functions to access and modift the zombie's data.

Using the zombie class, create a game in which a small number of zombies 
	attack each other until only one remains!

*/

#include <cstdlib>
#include <cstdio>
#include "zombie.h"
#include "Gamestate.h"





void main()
{
	GameState gs;

	gs.init();
	gs.start();
	
	
	while (!gs.isGameOver())
	{
		gs.update();
		gs.drawRound();				
		getchar();

		if (gs.isGameOver()) printf("Game over. ");
	}

	getchar();

		// loop through and have them randomly attack each other.
		// print the results of each round.
	// Print the results of each combat round.
	// Print the number of 

}