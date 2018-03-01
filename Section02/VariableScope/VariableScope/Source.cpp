#include <iostream>

const auto pi = 3.141592f;

float calculate_area_of_circle(const float radius);

int main()
{
	auto radius = 0.0f;

	std::cout << "Please enter a radius for a circle, ";
	std::cin >> radius;
	std::cout << "The circle's area is, " << calculate_area_of_circle(radius);
	return 0;
}

float calculate_area_of_circle(const float radius)
{
	return radius * radius * pi;
}