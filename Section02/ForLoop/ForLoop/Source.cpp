#include <iostream>
#include <string>

int main()
{
	int alphabet_count{ 26 };
	const char beginning_character{ 'A' };

	/*
	 * for loop statement using; initialization, conditional, and loop expressions
	 */
	for (auto i = 0; i < alphabet_count; i++)
	{
		char current_char = beginning_character + i;
		std::cout << current_char << " ";
	}

	std::cout << std::endl;

	/*
	* for loop statement using; initialization & conditional expressions
	*/
	int j;
	for ( j = 0; j < alphabet_count; /*loop expression*/)
	{
		char current_char = beginning_character + j++;
		std::cout << current_char << " ";

	}

	std::cout << std::endl;

	/*
	* for loop statement using just the conditional expression
	*/
	int k = 0;
	for ( /*initialization exp.*/; k < alphabet_count; /*loop expression*/)
	{
		char current_char = beginning_character + k;
		std::cout << current_char << " ";
		k++;
	}

	return 0;
}
