#include <iostream>
#include <string>

// include gives us access to the math functions
#include <cmath>

int main()
{
	std::cout << "sinf(0.0f)\t=" << std::to_string(sinf(0.0f)) << std::endl;
	std::cout << "cosf(0.0f)\t=" << std::to_string(cosf(0.0f)) << std::endl;
	std::cout << "powf(2.0f, 2.0f)\t=" << std::to_string(powf(2.0f, 2.0f)) << std::endl;
	std::cout << "floorf(1.99f)\t=" << std::to_string(floorf(1.99f)) << std::endl;
	std::cout << "ceilf(1.01f)\t=" << std::to_string(ceilf(1.01f)) << std::endl;
	std::cout << "fabsf(-3.0f)\t=" << std::to_string(fabsf(-3.0f)) << std::endl;
	std::cout << "logf(2.0f)\t=" << std::to_string(logf(2.0f)) << std::endl;
	std::cout << "sqrtf(2.0f)\t=" << std::to_string(sqrtf(2.0f)) << std::endl;
	
	return 0;
}
