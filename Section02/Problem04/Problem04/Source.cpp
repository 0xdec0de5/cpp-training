#include <iostream>

int main()
{
	auto A = 5.5f;
	auto B = true;
	auto C = 9;
	auto D = '9';

	std::cout << std::boolalpha;
	std::cout << "A >= C || D == D = "
		<< (A >= C || D == D) << std::endl;
	std::cout << "B && B || D != D = "
		<< (B && B || D != D) << std::endl;
	std::cout << "A < D && (!B || C == C) = " 
		<< (A < D && (!B || C == C)) << std::endl;
	std::cout << "!(D == 9 || '9' <= 9 || A != 5.5f) = " 
		<< (!(D == 9 || '9' <= 9 || A != 5.5f)) << std::endl;
	std::cout << "!(!(((A < C) && !(D != A)) && (B || C > 9))) = " 
		<< (!(!(((A < C) && !(D != A)) && (B || C > 9)))) << std::endl;

	return 0;
}
