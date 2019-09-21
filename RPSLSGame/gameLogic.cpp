#include <iostream>

void playGame(int userInput, int computerInput)
{
	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int lizard = 4;
	int spock = 5;

	if (userInput == rock && computerInput == scissors) {
		std::cout << "You win!\n";
	}
	else if (userInput == scissors && computerInput == paper) {
		std::cout << "You win!\n";
	}
	else if (userInput == paper && computerInput == rock) {
		std::cout << "You win!\n";
	}
	else if (userInput == lizard && computerInput == spock) {
		std::cout << "You win!\n";
	}
	else if (userInput == spock && computerInput == scissors) {
		std::cout << "You win!\n";
	}
	else if (userInput == scissors && computerInput == lizard) {
		std::cout << "You win!\n";
	}
	else if (userInput == lizard && computerInput == paper) {
		std::cout << "You win!\n";
	}
	else if (userInput == paper && computerInput == spock) {
		std::cout << "You win!\n";
	}
	else if (userInput == spock && computerInput == rock) {
		std::cout << "You win!\n";
	}
	else if (userInput == rock && computerInput == lizard) {
		std::cout << "You win!\n";
	}
	else if (userInput == computerInput) {
		std::cout << "Tie!\n";
	}
	else {
		std::cout << "You Lose!\n";
	}
}