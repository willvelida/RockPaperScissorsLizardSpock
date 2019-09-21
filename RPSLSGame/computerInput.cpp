#include <iostream>
#include <cstdlib>
#include <time.h>

int computerInput()
{
	srand(time(NULL));
	int computer = std::rand() % 5 + 1;

	return computer;
}
