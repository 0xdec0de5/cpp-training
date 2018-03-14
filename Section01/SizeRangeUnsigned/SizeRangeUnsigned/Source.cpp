#include <limits>
#include <iostream>

int main()
{
	int char_min = std::numeric_limits<char>::min();
	int char_max = std::numeric_limits<char>::max();
	int uchar_min = std::numeric_limits<unsigned char>::min();
	int uchar_max = std::numeric_limits<unsigned char>::max();

	std::cout << "Type\tSize\tMin\tMax" << std::endl;
	std::cout << "------------------------------" << std::endl;

	// Char
	std::cout << "char\t" << sizeof(char) << '\t' << char_min << "\t"
		<< char_max << std::endl;

	// Bool
	std::cout << "bool\t" << sizeof(bool) << '\t'
		<< std::numeric_limits<bool>::min() << "\t"
		<< std::numeric_limits<bool>::max() << std::endl;

	// Short
	std::cout << "short\t" << sizeof(short) << '\t'
		<< std::numeric_limits<short>::min() << "\t"
		<< std::numeric_limits<short>::max() << std::endl;

	// Int
	std::cout << "int\t" << sizeof(int) << '\t'
		<< std::numeric_limits<int>::min() << "\t"
		<< std::numeric_limits<int>::max() << std::endl;

	// Long
	std::cout << "long\t" << sizeof(long) << '\t'
		<< std::numeric_limits<long>::min() << "\t"
		<< std::numeric_limits<long>::max() << std::endl;

	// Long Long
	std::cout << "long long\t" << sizeof(long long) << '\t'
		<< std::numeric_limits<long long>::min() << "\t"
		<< std::numeric_limits<long long>::max() << std::endl;

	// Float
	std::cout << "float\t" << sizeof(float) << '\t'
		<< std::numeric_limits<float>::min() << "\t"
		<< std::numeric_limits<float>::max() << std::endl;

	// double
	std::cout << "double\t" << sizeof(double) << '\t'
		<< std::numeric_limits<double>::min() << "\t"
		<< std::numeric_limits<double>::max() << std::endl;

	// Unsigned Char
	std::cout << "unsigned char\t" << sizeof(unsigned char) << '\t' << uchar_min << "\t"
		<< uchar_max << std::endl;

	// unsigned short
	std::cout << "unsigned short\t" << sizeof(unsigned short) << '\t'
		<< std::numeric_limits<unsigned short>::min() << "\t"
		<< std::numeric_limits<unsigned short>::max() << std::endl;

	// unsigned int
	std::cout << "unsigned int\t" << sizeof(unsigned int) << '\t'
		<< std::numeric_limits<unsigned int>::min() << "\t"
		<< std::numeric_limits<unsigned int>::max() << std::endl;

	// unsigned long
	std::cout << "unsigned long\t" << sizeof(unsigned long) << '\t'
		<< std::numeric_limits<unsigned long>::min() << "\t"
		<< std::numeric_limits<unsigned long>::max() << std::endl;
	
	return 0;
}