#include <iostream>

int main()
{
	unsigned int input;
	std::cout << "Enter a positive int to calculate n! " << std::endl;
	std::cin >> input;

	auto result = 1u;
	for (auto i = input; i > 0; i--)
	{
		//n(n-1)...(1)
		result *= i;
	}

	std::cout << input << "! = " << result;

	return 0;
}
