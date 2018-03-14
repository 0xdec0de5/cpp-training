#include <iostream>
#include<vector>

int main()
{
	// Given a container of ints
	std::vector<int> v = { 9, 4, 13, 55, 32, 64, 98, -1, 0, 18 };

	// User defined number to find
	auto number_to_find = 0;

	std::cout << "Given 9, 4, 13, 55, 32, 64, 98, -1, 0, 18 "
		<< "enter the number you want to find the index of: ";
	std::cin >> number_to_find;

	// Find the index of number_to_find
	auto i = 0u;
	for (auto n : v)
	{
		if (n == number_to_find)
		{
			std::cout << "The index of " << number_to_find << " is " << i;
			break;
		}
		i++;
	}

	return 0;
}