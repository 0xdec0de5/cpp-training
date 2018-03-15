#include <iostream>

int main()
{
	char input;

	std::cout << "Do you want to re(t)ry, (q)uit, or (r)estart the game? ";
	std::cin >> input;

	switch (input)
	{
	case 't':
	case 'T':
		std::cout << std::endl << "Okay, lets retry the game!";
		break;
	case 'q':
	case 'Q':
		std::cout << std::endl << "Goodbye.";
		break;
	case 'r':
	case 'R':
		std::cout << std::endl << "Starting over again.";
		break;
	default:
		std::cout << std::endl << "Sorry, I didn't get that?";
		break;
	}

	return 0;
}
