#include <iostream>

int main()
{
	bool A = false;
	bool B = false;

	std::cout << std::boolalpha;

	/*
	 Truth Tables - Logical AND
	*/
	std::cout << "A\tB\tA AND B" << std::endl;

	// A = false, B = false
	std::cout << A << "\t" << B << "\t" << (A && B) << std::endl;

	B = true;
	// A = false, B = true
	std::cout << A << "\t" << B << "\t" << (A && B) << std::endl;

	A = true;
	B = false;
	// A = true, B = false
	std::cout << A << "\t" << B << "\t" << (A && B) << std::endl;

	B = true;
	// A = true, B = true
	std::cout << A << "\t" << B << "\t" << (A && B) << std::endl;

	/* 
	 Truth Tables - Logical OR
	*/
	std::cout << std::endl << "A\tB\tA OR B" << std::endl;

	A = false;
	B = false;
	// A = false, B = false
	std::cout << A << "\t" << B << "\t" << (A || B) << std::endl;

	B = true;
	// A = false, B = true
	std::cout << A << "\t" << B << "\t" << (A || B) << std::endl;

	A = true;
	B = false;
	// A = true, B = false
	std::cout << A << "\t" << B << "\t" << (A || B) << std::endl;

	B = true;
	// A = true, B = true
	std::cout << A << "\t" << B << "\t" << (A || B) << std::endl;

	/*
	Truth Tables - Logical NOT
	*/
	std::cout << std::endl << "A\t!A" << std::endl;

	A = false;
	// A = false
	std::cout << A << "\t" << (!A) << std::endl;

	A = true;
	// A = true
	std::cout << A << "\t"<< (!A) << std::endl;

	return 0;
}

