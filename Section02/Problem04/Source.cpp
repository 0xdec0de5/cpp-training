#include <iostream>

int main()
{
	std::cout << "Enter the character class for your player." << std::endl;
	std::cout << "(B)arbarian, (M)age, (R)ogue, (D)ruid: ";
	// TODO - handle user input: (b/B), (m/M), (r/R), or (d/D)
	char character_class;
	std::cin >> character_class;

	// Barbarian Character
	unsigned short barbarian_strength = 20;
	unsigned short barbarian_agility = 12;
	unsigned short barbarian_intelligence = 5;
	unsigned short barbarian_wisdom = 7;

	// Mage Character
	unsigned short mage_strength = 5;
	unsigned short mage_agility = 10;
	unsigned short mage_intelligence = 20;
	unsigned short mage_wisdom = 11;

	// Rogue Character
	unsigned short rogue_strength = 9;
	unsigned short rogue_agility = 20;
	unsigned short rogue_intelligence = 14;
	unsigned short rogue_wisdom = 6;

	// Druid Character
	unsigned short druid_strength = 14;
	unsigned short druid_agility = 8;
	unsigned short druid_intelligence = 5;
	unsigned short druid_wisdom = 20;

	// TODO - from the user's selection, print their character's properties to the console.
	switch(character_class)
	{
	case 'b':
	case 'B':
		std::cout << "The player is a Barbarian" << std::endl
			<< "\tStrength = " << barbarian_strength << std::endl
			<< "\tAgility = " << barbarian_agility << std::endl
			<< "\tIntelligence = " << barbarian_intelligence << std::endl
			<< "\tWisdom = " << barbarian_wisdom << std::endl;
		break;
	case 'm':
	case 'M':
		std::cout << "The player is a Mage" << std::endl
			<< "\tStrength = " << mage_strength << std::endl
			<< "\tAgility = " << mage_agility << std::endl
			<< "\tIntelligence = " << mage_intelligence << std::endl
			<< "\tWisdom = " << mage_wisdom << std::endl;
		break;
	case 'r':
	case 'R':
		std::cout << "The player is a Rogue" << std::endl
			<< "\tStrength = " << rogue_strength << std::endl
			<< "\tAgility = " << rogue_agility << std::endl
			<< "\tIntelligence = " << rogue_intelligence << std::endl
			<< "\tWisdom = " << rogue_wisdom << std::endl;
		break;
	case 'd':
	case 'D':
		std::cout << "The player is a Druid" << std::endl
			<< "\tStrength = " << druid_strength << std::endl
			<< "\tAgility = " << druid_agility << std::endl
			<< "\tIntelligence = " << druid_intelligence << std::endl
			<< "\tWisdom = " << druid_wisdom << std::endl;
		break;
	default:
		std::cout << "You didn't enter a valid character class.";
		break;
	}

	return 0;
}