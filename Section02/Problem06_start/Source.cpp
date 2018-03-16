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

std::string choose_character()
{
	do 
	{
		std::cout << "Enter the character class for your player." << std::endl;
		std::cout << "(B)arbarian, (M)age, (R)ogue, (D)ruid: ";
		char character_class;
		std::cin >> character_class;

		switch (character_class)
		{
		case 'b':
		case 'B':
			return "Barbarian";
		case 'm':
		case 'M':
			return "Mage";
		case 'r':
		case 'R':
			return "Rogue";
		case 'd':
		case 'D':
			return "Druid";
		default:
			std::cout << "I didn't get that, try again..." << std::endl;
			break;
		}
	}
	while (true);
}

unsigned int generate_agility(std::string character_class)
{
	if (character_class == "Barbarian")
	{
		// Strength(D6 + 10)
		return 10u + roll_die(6);
	}

	if (character_class == "Mage")
	{
		// Strength(D4 + 10)
		return 10u + roll_die(4);
	}

	if (character_class == "Rogue")
	{
		// Strength(D10 + 10)
		return 10u + roll_die(10);
	}

	if (character_class == "Druid")
	{
		// Strength(D4 + 8)
		return 8u + roll_die(4);
	}

	return 0;
}

unsigned int generate_strength(std::string character_class)
{
	if (character_class == "Barbarian")
	{
		// Strength(D10 + 10)
		return 10u + roll_die(10);
	}

	if (character_class == "Mage")
	{
		// Strength(D4 + 8)
		return 8u + roll_die(4);
	}

	if (character_class == "Rogue")
	{
		// Strength(D4 + 8)
		return 8u + roll_die(4);
	}

	if (character_class == "Druid")
	{
		// Strength(D6 + 10)
		return 10u + roll_die(6);
	}

	return 0;
}

unsigned int generate_intelligence(std::string character_class)
{
	if (character_class == "Barbarian")
	{
		// Strength(D4 + 8)
		return 8u + roll_die(4);
	}

	if (character_class == "Mage")
	{
		// Strength(D10 + 10)
		return 10u + roll_die(10);
	}

	if (character_class == "Rogue")
	{
		// Strength(D6 + 10)
		return 10u + roll_die(6);
	}

	if (character_class == "Druid")
	{
		// Strength(D4 + 10)
		return 10u + roll_die(4);
	}

	return 0;
}

unsigned int generate_wisdom(std::string character_class)
{
	if (character_class == "Barbarian")
	{
		// Strength(D4 + 10)
		return 10u + roll_die(4);
	}

	if (character_class == "Mage")
	{
		// Strength(D6 + 10)
		return 10u + roll_die(6);
	}

	if (character_class == "Rogue")
	{
		// Strength(D4 + 10)
		return 10u + roll_die(4);
	}

	if (character_class == "Druid")
	{
		// Strength(D10 + 10)
		return 10u + roll_die(10);
	}

	return 0;
}

int main()
{
	// Player properties
	std::string player_class{};
	unsigned short player_strength{};
	unsigned short player_agility{};
	unsigned short player_intelligence{};
	unsigned short player_wisdom{};

	player_class = choose_character();
	player_strength = generate_strength(player_class);
	player_agility = generate_agility(player_class);
	player_intelligence = generate_intelligence(player_class);
	player_wisdom = generate_wisdom(player_class);

	std::cout << "The player is a " << player_class << std::endl
		<< "\tStrength = " << player_strength << std::endl
		<< "\tAgility = " << player_agility << std::endl
		<< "\tIntelligence = " << player_intelligence << std::endl
		<< "\tWisdom = " << player_wisdom << std::endl;

	// TODO randomize a monster to battle
	std::string monster_class{};
	unsigned short monster_strength{};
	unsigned short monster_agility{};
	unsigned short monster_intelligence{};
	/*
	 * 1) roll a D4
	 *	a) if 1, class is Rat- Strength(D4 + 4) Agility(D10 + 10) Intelligence(D4 + 4)
	 *	b) if 2, class is Golem- Strength(D10 + 10) Agility(D4 + 4) Intelligence(D4 + 6)
	 *	c) if 3, class is Goblin- Strength(D8 + 8) Agility(D8 + 8) Intelligence(D8 + 10)
	 *	d) if 4, class is Orc- Strength(D10 + 8) Agility(D8 + 10) Intelligence(D6 + 6)
	 */

	std::cout << "The monster is a " << monster_class << std::endl
		<< "\tStrength = " << monster_strength << std::endl
		<< "\tAgility = " << monster_agility << std::endl
		<< "\tIntelligence = " << monster_intelligence << std::endl;

	char player_input{};
	/* TODO
	 *  1) create a do-while loop
	 *  2) prompt the player for a single char store into variable player_input
	 *  3) handle players input using the following:
	 *   a) (q/Q) exits the game
	 *   b) (a/A) player attacks monster (just print to console)
	 *   c) (b/B) player back stabs monster (just print to console)
	 *   d) (s/S) player casts hurt spell on monster (just print to console)
	 *   e) (h/H) player casts healing on self (just print to console)
	 *   f) if none of the above continue prompting player
	 *   
	 */


	return 0;
}