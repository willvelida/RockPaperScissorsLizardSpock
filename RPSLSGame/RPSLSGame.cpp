#include <iostream>
#include "computerInput.h"
#include "userInput.h";
#include "gameLogic.h";

int main()
{
	std::cout << "=================================\n";
	std::cout << "Welcome to the rock paper scissors lizard spock game!\n";
	std::cout << "=================================\n";

	// Get computer input
	int computer = computerInput();

	// Get user input
	int user = userInput();

	// Game logic
	std::cout << "The computer chose: " << computer << "\n";
	std::cout << "You chose: " << user << "\n";
	playGame(user, computer);

}