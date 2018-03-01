#include <iostream>
#include <string>

/**
 * Declare our function 'cube' so it can be used before it is defined
 */
float cube(const float a);

int main()
{
	auto num = 0.0f;

	std::cout << "Enter a number to cube, ";
	std::cin >> num;
	std::cout << "Your number cubed is, " << std::to_string(cube(num));

	return 0;
}

float cube(const float a)
{
	return a * a * a;
}