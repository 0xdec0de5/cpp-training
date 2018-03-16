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
	} while (true);
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

std::string generate_monster_class()
{
	switch (roll_die(4))
	{
	case 1:
		return "Rat";
	case 2:
		return "Golem";
	case 3:
		return "Goblin";
	case 4:
		return "Orc";
	default:
		return "Unknown";
	}
}

unsigned short generate_monster_intelligence(std::string monster_class)
{
	if (monster_class == "Rat")
	{
		return 4u + roll_die(4);
	}

	if (monster_class == "Golem")
	{
		return 6u + roll_die(4);
	}

	if (monster_class == "Goblin")
	{
		return 10u + roll_die(8);
	}

	if (monster_class == "Orc")
	{
		return 6u + roll_die(6);
	}

	return 0;
}

unsigned short generate_monster_strength(std::string monster_class)
{
	if (monster_class == "Rat")
	{
		return 4u + roll_die(4);
	}

	if (monster_class == "Golem")
	{
		return 10u + roll_die(10);
	}

	if (monster_class == "Goblin")
	{
		return 8u + roll_die(8);
	}

	if (monster_class == "Orc")
	{
		return 10u + roll_die(8);
	}

	return 0;
}

unsigned short generate_monster_agility(std::string monster_class)
{
	if (monster_class == "Rat")
	{
		return 10u + roll_die(10);
	}

	if (monster_class == "Golem")
	{
		return 4u + roll_die(4);
	}

	if (monster_class == "Goblin")
	{
		return 8u + roll_die(8);
	}

	if (monster_class == "Orc")
	{
		return 10u + roll_die(8);
	}

	return 0;
}

// Handle actions

int main()
{
	// Player properties
	std::string player_class{};
	unsigned short player_strength{};
	unsigned short player_agility{};
	unsigned short player_intelligence{};
	unsigned short player_wisdom{};
	unsigned short player_hitpoints{ 10 };

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

	// Monster properties
	std::string monster_class = generate_monster_class();
	unsigned short monster_strength = generate_monster_strength(monster_class);
	unsigned short monster_agility = generate_monster_agility(monster_class);
	unsigned short monster_intelligence = generate_monster_intelligence(monster_class);
	unsigned short monster_hitpoints{ 10 };

	std::cout << "The monster is a " << monster_class << std::endl
		<< "\tStrength = " << monster_strength << std::endl
		<< "\tAgility = " << monster_agility << std::endl
		<< "\tIntelligence = " << monster_intelligence << std::endl;

	char player_input{};

	do
	{
		std::cout << "What do you want to do? (q)uit, (a)ttack, (b)ack stab, (s)pell, (h)eal: ";
		std::cin >> player_input;

		switch (player_input)
		{
		case 'a':
		case 'A':
			std::cout << player_class << " attacked " << monster_class << std::endl;

			break;
		case 'b':
		case 'B':
			std::cout << player_class << " back stabbed " << monster_class << std::endl;
			break;
		case 's':
		case 'S':
			std::cout << player_class << " cast hurt on " << monster_class << std::endl;
			break;
		case 'h':
		case 'H':
			std::cout << player_class << " healed themselves " << std::endl;
			break;
		}

	} while (player_input != 'q' && player_input != 'Q');

	return 0;
}
