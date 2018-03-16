#include <iostream>

int main()
{
	// Set output stream to friendly print booleans
	std::cout.setf(std::ios_base::boolalpha);

	int player_str{};
	int enemy_str{};

	std::cout << "Enter a value for the player's strength ";
	std::cin >> player_str;

	std::cout << "Enter a value for the enemy's strength ";
	std::cin >> enemy_str;

	std::cout << "player_str == enemy_str =\t" << (player_str == enemy_str) << std::endl;
	std::cout << "player_str != enemy_str =\t" << (player_str != enemy_str) << std::endl;
	std::cout << "player_str < enemy_str =\t" << (player_str < enemy_str) << std::endl;
	std::cout << "player_str > enemy_str =\t" << (player_str > enemy_str) << std::endl;
	std::cout << "player_str <= enemy_str =\t" << (player_str <= enemy_str) << std::endl;
	std::cout << "player_str >= enemy_str =\t" << (player_str >= enemy_str) << std::endl;

	return 0;
}