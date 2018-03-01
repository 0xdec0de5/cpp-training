#include <iostream>

int main()
{
	auto continue_game = 'y';

	// Infinite Loop
	while (true)
	{
		std::cout << "Do you want to continue the game? (y)es/(n)o ";
		std::cin >> continue_game;

		if(continue_game == 'n')
		{
			// This breaks out of the inner most loop
			break;
		}
		
		std::cout << "You are still playing the game." << std::endl;
	}

	std::cout << "This game is over!";
	
	return 0;
}