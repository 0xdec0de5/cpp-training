#include <iostream>
#include <random>
#include <string>

int roll_six_sided_die()
{
	// Randomly roll a six sided die
	std::random_device device;
	std::mt19937 engine(device());
	std::uniform_int_distribution<int> dist(1, 6);
	return dist(engine);
}

int main()
{
	// Player's hit accuracy
	unsigned short player_accuracy = 3;

	// Lets roll the die
	unsigned short die_roll = roll_six_sided_die();

	std::cout << "You rolled a, " + std::to_string(die_roll) << std::endl;

	// Conditional (ternary) operator
	die_roll <= player_accuracy
		? std::cout << "The player slays the dragon"
		: std::cout << "The player misses and is killed by the dragon";

	return 0;
}