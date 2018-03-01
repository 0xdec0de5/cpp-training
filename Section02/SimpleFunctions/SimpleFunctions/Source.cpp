#include <iostream>
#include <string>

int calculate_area_of_square()
{
	auto length_of_side = 0u;

	std::cout << "Please enter the length of your square: ";
	std::cin >> length_of_side;

	if(length_of_side <= 0)
	{
		return 0;
	}

	return length_of_side * length_of_side;
}

int main()
{
	const auto area_one = calculate_area_of_square();
	const auto area_two = calculate_area_of_square();

	std::cout << "Square One's area is, " << std::to_string(area_one) << std::endl;
	std::cout << "Square Two's area is, " << std::to_string(area_two) << std::endl;
	return 0;
}