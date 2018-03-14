#include <iostream>

int main()
{
	auto A = 5.5F;
	auto B = true;
	auto C = 9;
	auto D = '9';

	std::cout << std::boolalpha;
	std::cout << "A >= C = " << (A >= C) << std::endl;
	std::cout << "D == D = " << (D == D) << std::endl;
	std::cout << "B != false = " << (B != false) << std::endl;
	std::cout << "C <= D = " << (C <= D) << std::endl;
	std::cout << "B = " << (B) << std::endl;
	std::cout << "D == C = " << (D == C) << std::endl;
	std::cout << "C != D = " << (C != D) << std::endl;

	return 0;
}