#include <iostream>
#include <random>
#include <string>

int main()
{
	// Randomly roll a six sided die
	std::random_device device;
	std::mt19937 engine(device());
	std::uniform_int_distribution<int> dist(1, 6);

	// Player's hit accuracy
	unsigned short player_accuracy = 3;

	// Lets roll the die
	unsigned short die_roll = dist(engine);

	std::cout << "You rolled a, " + std::to_string(die_roll) << std::endl;

	// Conditional (ternary) operator
	die_roll <= player_accuracy
		? std::cout << "The player slays the dragon"
		: std::cout << "The player misses and is killed by the dragon";


	// Exact same outcome but using the if-else statement
	/*
		if (die_roll <= player_accuracy)
		{
			std::cout << "The player slays the dragon"
		}
		else
		{
			std::cout << "The player misses and is killed by the dragon";
		}
	*/

	return 0;
}
