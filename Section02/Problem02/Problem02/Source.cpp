#include <iostream>

int main()
{
	auto A = true;
	auto B = false;
	auto C = true;
	auto D = false;

	std::cout << std::boolalpha;
	std::cout << "B || D || A = " << ( B || D || A ) << std::endl;
	std::cout << "A && C && D = "<< ( A && C && D ) << std::endl;
	std::cout << "!A || B || D || !C = " << ( !A || B || D || !C ) << std::endl;
	std::cout << "!(A || B || C || D) = " << ( !(A || B || C || D) ) << std::endl;
	std::cout << "A && !B && C && !D = " << ( A && !B && C && !D ) << std::endl;
	std::cout << "(!(A && B) && !(D || !A)) = " << ( (!(A && B) && !(D || !A)) ) << std::endl;
	std::cout << "!((B || (B || (!C))) && !D) = " << ( !((B || (B || (!C))) && !D) ) << std::endl;

	return 0;
}