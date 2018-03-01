#include <iostream>
#include <string>

int main()
{
	auto evens = 0u;

	for(auto i = 0u; i < 10; i++)
	{
		// If i is odd
		if (i % 2 == 1)
		{
			// Jump to the next iteration
			continue;
		}

		std::cout << "evens += " << std::to_string(i) << std::endl;
		evens += i;
	}

	std::cout << "The sum of the even numbers is, " << std::to_string(evens);

	return 0;
}
