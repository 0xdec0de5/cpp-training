#include <iostream>

int main()
{
	char input;

	do
	{
		std::cout << "Print a letter or (q)uit ";
		std::cin >> input;
		std::cout << input << std::endl;

	} while (input != 'q' && input != 'Q');

	/*
	char input;
	std::cout << "Print a letter or (q)uit ";
	std::cin >> input;
	std::cout << input << std::endl;

	while (input != 'q' && input != 'Q')
	{
		std::cout << "Print a letter or (q)uit ";
		std::cin >> input;
		std::cout << input << std::endl;
	}
	*/

	return 0;
}