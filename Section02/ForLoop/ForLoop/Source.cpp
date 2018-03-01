#include <iostream>
#include <string>

int main()
{
	for (auto i = 0u; i < 10; i++)
	{
		std::cout << "In iteration #" << std::to_string(i + 1) << std::endl;
	}

	return 0;
}
