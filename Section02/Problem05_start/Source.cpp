#include <iostream>
#include <random>
#include <string>

unsigned int roll_die(unsigned int max_number)
{
	std::random_device device;
	std::mt19937 engine(device());
	std::uniform_int_distribution<int> dist(1, max_number);
	return dist(engine);
}

int main()
{
	std::cout << "Enter the character class for your player." << std::endl;
	std::cout << "(B)arbarian, (M)age, (R)ogue, (D)ruid: ";
	char character_class;
	std::cin >> character_class;

	std::string player_class{};
	unsigned short player_strength{};
	unsigned short player_agility{};
	unsigned short player_intelligence{};
	unsigned short player_wisdom{};

	// TODO - based on the character_class, generate a player using the following:
	/*
	 * Barbarian- Strength( D10 + 10 ), Agility( D6 + 10 ), Intelligence( D4 + 8 ), Wisdom( D4 + 10 )
	 * Mage- Strength( D4 + 8 ), Agility( D4 + 10 ), Intelligence( D10 + 10 ), Wisdom( D6 + 10 )
	 * Roge- Strength( D4 + 8 ), Agility( D10 + 10 ), Intelligence( D6 + 10 ), Wisdom( D4 + 10 )
	 * Druid- Strength( D6 + 10 ), Agility( D4 + 8 ), Intelligence( D4 + 10 ), Wisdom( D10 + 10 )
	 */
	/* 
	 * NOTE - D? is the die roll you must perform and add to the literal value. 
	 *	for example, D10 + 8 would require the following, roll_die(10) + 8
	 */
	if (/* Handle character_class's */)
	{
	
	}
	else
	{
		std::cout << "You didn't enter a valid character class";
		return 1;
	}

	std::cout << "The player is a " << player_class << std::endl
		<< "\tStrength = " << player_strength << std::endl
		<< "\tAgility = " << player_agility << std::endl
		<< "\tIntelligence = " << player_intelligence << std::endl
		<< "\tWisdom = " << player_wisdom << std::endl;

	return 0;
}