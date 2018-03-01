#include <iostream>

int main()
{
	auto input = 'q';
	
	do
	{
		std::cout << "Print a letter or (q)uit ";
		std::cin >> input;
		std::cout << input << std::endl;

	} while (input != 'q' && input != 'Q');

	return 0;
}