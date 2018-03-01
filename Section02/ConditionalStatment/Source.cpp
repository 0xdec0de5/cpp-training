#include <iostream>

int main()
{
	int i = 0;

	std::cout << "Please enter a number ";
	std::cin >> i;

	if (i > 0)
	{
		std::cout << std::endl << 
			"You entered a number greater than 0";
	}
	else
	{
		std::cout << std::endl << 
			"You entered a number less than or equal 0";
	}
	return 0;
}