#include <iostream>

int main()
{
	auto age = 0;

	std::cout << "How old are you? ";
	std::cin >> age;

	if (age < 5)
	{
		std::cout << "You are almost ready for school!" << std::endl;
	}
	else if (age < 25)
	{
		std::cout << "I bet you're still in school!" << std::endl;
	}
	else if (age < 65)
	{
		std::cout << "Time to start your career" << std::endl;
	}
	else
	{
		std::cout << "You are almost ready to retire!";
	}


	return 0;
}