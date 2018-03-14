#include <iostream>

using namespace std;

int main()
{
	char c = 100; // -128, 127
	int i = c; // -2,147,000,000 - 2,147,000,000
	cout << "value of i is " << i << endl;

	i = 35'000;
	short s = i; // -32768, 32767
	cout << "value of s is " << s << endl;

	unsigned char uc = -1; // 0, 255
	cout << "value of uc is " << (short)uc << endl;
	
	float f = 50000.1234f;
	s = f;
	cout << "value of s is " << s << endl;

	return 0;
}