#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int user_input;

	std::cout << "Enter as many positive integers as you want.";
	std::cout << " Enter any negative number to end." << std::endl;

	do
	{
		std::cout << std::endl << "Your number is > ";
		std::cin >> user_input;

		if (user_input >= 0)
		{
			v.push_back(user_input);
		}

	} while (user_input >= 0);

	if (!v.empty())
	{
		std::cout << std::endl << std::endl << "The elements you entered are, ";

		for (auto e : v)
		{
			std::cout << e << " ";
		}

	}
	else
	{
		std::cout << std::endl << std::endl << "There is nothing to see here!";
	}

	return 0;
}
