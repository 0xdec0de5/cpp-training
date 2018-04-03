#include <iostream>

int main()
{
	char current_char{ 'A' };

	while (current_char <= 'Z')
	{
		std::cout << current_char << " ";
		current_char++;
	}

	/*
	int alphabet_count{ 26 };
	const char beginning_character{ 'A' };

	// Making the while equivalent to our for loop statement
	int i = 0;
	while (i < alphabet_count)
	{
		char current_char = beginning_character + i;
		std::cout << current_char << " ";
		i++;
	}
	*/

	return 0;
}