#include <iostream>

int userInput()
{
	int user = 0;

	std::cout << "Please choose an option (Enter the number):\n\n";

	std::cout << "1) ROCK\n";
	std::cout << "2) PAPER\n";
	std::cout << "3) SCISSORS\n";
	std::cout << "4) LIZARD\n";
	std::cout << "5) SPOCK\n";

	std::cin >> user;

	return user;
}