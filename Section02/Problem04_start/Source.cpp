#include <iostream>

int main()
{
	std::cout << "Enter the character class for your player." << std::endl;
	std::cout << "(B)arbarian, (M)age, (R)ogue, (D)ruid: ";
	// TODO - handle user input: (b/B), (m/M), (r/R), or (d/D)

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

	return 0;
}