#include <iostream>
#include <cmath>

int main()
{
	unsigned short player_lives = 3u;
	int player_hitpoints = 5;
	int player_position_x = 3;
	int player_position_y = 0;

	int enemy_hitpoints = 1;
	int enemy_position_x = 5;
	int enemy_position_y = 2;

	unsigned short sword_length = 3u;

	float time_limit = 180.0f;
	float elapsed_time = 60.0f;

	// Calculate Distance using Pythagorean Theorem -> sqrt( (deltaX + deltaY)^2 )
	const float distance = sqrt(pow(player_position_x - enemy_position_x, 2) + pow(player_position_y - enemy_position_y, 2));

	std::cout << std::boolalpha;

	bool is_win_condition = (player_hitpoints > 0 && enemy_hitpoints <= 0);
	std::cout << "Has won!\t" << is_win_condition << std::endl;

	bool is_restart_condition = (player_hitpoints <= 0 && player_lives != 0);
	std::cout << "Player restarts\t" << is_restart_condition << std::endl;

	bool is_game_active = (player_hitpoints > 0 && player_lives != 0 || elapsed_time < time_limit);
	std::cout << "Still playing\t" << is_game_active << std::endl;

	bool can_attack = (player_hitpoints > 0 && enemy_hitpoints > 0 && distance <= sword_length);
	std::cout << "In range\t" << can_attack << std::endl;

	bool is_fail_condition = !is_game_active;
	std::cout << "Game over!\t" << is_fail_condition << std::endl;

	return 0;
}

