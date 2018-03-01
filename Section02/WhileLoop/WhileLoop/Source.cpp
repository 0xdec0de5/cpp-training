#include <iostream>
#include <string>

int main()
{
	auto continue_summation = true;
	auto sum = 0;
	auto temp = 0;

	while(continue_summation == true)
	{
		std::cout << "Enter a number to add (0 to exit): ";
		std::cin >> temp;

		if(temp == 0)
		{
			continue_summation = false;
		}
		else
		{
			sum += temp;
		}
	}

	std::cout << "Your sum is: " << std::to_string(sum);

	return 0;
}
