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
unsigned short perform_attack(unsigned short attacker_agility,
	unsigned short attacker_strength, unsigned short defender_agility)
{
	const auto default_hit_dice = 10;
	const auto difference_in_agility = defender_agility - attacker_agility;
	const auto roll_required = default_hit_dice + difference_in_agility;

	if (roll_die(20) >= roll_required)
	{
		// We hit
		return attacker_strength / 5;
	}

	return 0;
}

unsigned short perform_backstab(unsigned short attacker_agility,
	unsigned short attacker_strength, unsigned short defender_agility)
{
	return perform_attack(attacker_agility / 2, attacker_strength * 2, defender_agility);
}

unsigned short perform_spell(unsigned short attacker_intelligence, unsigned short defender_intelligence)
{
	if (roll_die(20) > defender_intelligence)
	{
		// We hit
		return attacker_intelligence / 5;
	}

	return 0;
}

unsigned short perform_heal(unsigned short casters_wisdom)
{
	if (casters_wisdom >= 17)
	{
		return roll_die(6);
	}
	else if (casters_wisdom >= 13)
	{
		return roll_die(5);
	}
	else if (casters_wisdom >= 9)
	{
		return roll_die(4);
	}
	else if (casters_wisdom >= 5)
	{
		return roll_die(3);
	}
	else
	{
		return roll_die(2);
	}
}


void print_damage_message(std::string actioner,
	std::string actionee, std::string action, unsigned short damage)
{
	std::cout << actioner << " " + action + " " << actionee << std::endl;
	std::string action_message = (damage > 0) ? "Hit for " + std::to_string(damage) : "Missed";
	std::cout << "\t" << action_message << std::endl;
}

void print_heal_message(unsigned short heal_amount)
{
	std::cout << "Player has been healed for " << std::to_string(heal_amount)
		<< " points" << std::endl;
}

void print_game_status(std::string player_class, unsigned short player_hitpoints,
	std::string monster_class, unsigned short monster_hitpoints)
{
	std::cout << std::endl << player_class << " has " << player_hitpoints << " remaining."
		<< std::endl << monster_class << " has " << monster_hitpoints << " remaining." << std::endl;
}

int main()
{
	// Player properties
	std::string player_class{};
	unsigned short player_strength{};
	unsigned short player_agility{};
	unsigned short player_intelligence{};
	unsigned short player_wisdom{};
	short player_hitpoints{ 10 };

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
	short monster_hitpoints{ 10 };

	std::cout << "The monster is a " << monster_class << std::endl
		<< "\tStrength = " << monster_strength << std::endl
		<< "\tAgility = " << monster_agility << std::endl
		<< "\tIntelligence = " << monster_intelligence << std::endl;

	char player_input{};

	do
	{
		std::cout << "What do you want to do? (q)uit, (a)ttack, (b)ack stab, (s)pell, (h)eal: ";
		std::cin >> player_input;

		auto damage_done = 0u;

		// Player's Action
		switch (player_input)
		{
		case 'a':
		case 'A':
			damage_done = perform_attack(player_agility, player_strength, monster_agility);
			monster_hitpoints -= damage_done;
			print_damage_message(player_class, monster_class, "attacked", damage_done);
			break;
		case 'b':
		case 'B':
			damage_done = perform_backstab(player_agility, player_strength, monster_agility);
			monster_hitpoints -= damage_done;
			print_damage_message(player_class, monster_class, "back stabbed", damage_done);
			break;
		case 's':
		case 'S':
			damage_done = perform_spell(player_intelligence, monster_intelligence);
			monster_hitpoints -= damage_done;
			print_damage_message(player_class, monster_class, "cast hurt on", damage_done);
			break;
		case 'h':
		case 'H':
			auto heal_amount = perform_heal(player_wisdom);
			player_hitpoints += heal_amount;
			print_heal_message(heal_amount);
			break;
		}

		// Check our game over condition for monster
		if (monster_hitpoints <= 0)
		{
			std::cout << "You defeated the " << monster_class << "!";
			return 0;
		}

		// Monster's Action
		damage_done = perform_attack(monster_agility, monster_strength, player_agility);
		player_hitpoints -= damage_done;
		print_damage_message(monster_class, player_class, "attacked", damage_done);

		// Check our game over condition for player
		if (player_hitpoints <= 0)
		{
			std::cout << "The " << monster_class << " has defeat you!";
			return 0;
		}

		print_game_status(player_class, player_hitpoints, monster_class, monster_hitpoints);

	} while (player_input != 'q' && player_input != 'Q');

	return 0;
}
