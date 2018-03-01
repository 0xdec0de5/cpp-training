#include <random>
#include <iostream>
#include <string>

auto hero_hitpoints = 10;
auto goblin_hitpoints = 10;

int roll_dice()
{
	std::random_device r;
	std::mt19937 generator(r());
	const std::uniform_int_distribution<int> dist(1, 10);
	return dist(generator);
}

void print_damage(const std::string& who, const int damage)
{
	std::cout << "The " << who << " took " << std::to_string(damage)
		<< " points of damage" << std::endl;

	std::cout << "Hero has " << std::to_string(hero_hitpoints) << " hitpoints, "
		<< "Goblin has " << std::to_string(goblin_hitpoints) << " hitpoints"
		<< std::endl << std::endl;
}

int main()
{
	char targeted_part;

	do
	{
		if (hero_hitpoints <= 0)
		{
			std::cout << "You have been defeated!";
			break;
		}

		if (goblin_hitpoints <= 0)
		{
			std::cout << "You have defeated the goblin!";
			break;
		}

		std::cout << "Body part to target (h)ead (t)orso (a)rm (l)eg (q)uit: ";
		std::cin >> targeted_part;

		const auto dice_roll = roll_dice();

		switch (targeted_part)
		{
		case 'h':
		case 'H':
			// Perform Head Attack
			if (dice_roll >= 7)
			{
				goblin_hitpoints -= 2;
				print_damage("Goblin", 2);
			}
			else
			{
				hero_hitpoints -= 1;
				print_damage("Hero", 1);
			}
			break;
		case 't':
		case 'T':
			// Perform Torso Attack
			if (dice_roll >= 5)
			{
				goblin_hitpoints -= 1;
				print_damage("Goblin", 1);
			}
			else
			{
				hero_hitpoints -= 1;
				print_damage("Hero", 1);
			}
			break;
		case 'a':
		case 'A':
		case 'l':
		case 'L':
			// Perform Leg/Arm Attack
			if (dice_roll <= 2)
			{
				hero_hitpoints -= 4;
				print_damage("Hero", 4);
			}
			else if (dice_roll >= 8)
			{
				goblin_hitpoints -= 2;
				print_damage("Goblin", 2);
			}
			else
			{
				std::cout << "You both miss!" << std::endl;
			}
			break;
		case 'q':
		case 'Q':
			std::cout << "Goodbye!" << std::endl;
			return 0;
		default:
			std::cout << "I didn't get that command?" << std::endl;
			break;
		}

	} while (true);

	return 0;
}