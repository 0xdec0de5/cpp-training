#include <iostream>

int main()
{

	//integer data types

	/*
		short
		int
		long
		long long
		char
	*/
	short _short = 32767; // -32768 to 32767
	int _int = 1234; // -2,147,483,648 to 2,147,483,647
	long _long = 1234;  // -2,147,483,648 to 2,147,483,647
	long long _ll = 2222; // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

	std::cout << _short << std::endl;
	std::cout << sizeof(short) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(long) << std::endl;
	std::cout << sizeof(char) << std::endl;
	
	char c = 97; // -127 to 127
	unsigned char uc = 97; // 0 to 255
	unsigned short us = 65535 + 3; // 0 to 65535
	std::cout << us << std::endl;

	//boolean
	bool b = true;
	std::cout << sizeof(bool) << std::endl;

	std::cout << std::boolalpha;
	std::cout << b << std::endl;

	//floating point & dbl precision types
	// 10.011

	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(double) << std::endl;
	std::cout << sizeof(long double) << std::endl;

	float f;
	f = 1.01F;
	double d = 1.02;
	long double ld = 1.03L;

	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << ld << std::endl;

	return 0;
}