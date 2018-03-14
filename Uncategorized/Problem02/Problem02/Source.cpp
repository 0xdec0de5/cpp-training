#include <iostream>

using namespace std;

int main()
{
	float f1 = 0.0f;
	float f2 = 0.0f;
	float f3 = 0.0f;

	cout << "Please enter your first real number ";
	cin >> f1;

	cout << "Please enter your second real number ";
	cin >> f2;

	cout << "Please enter your last real number ";
	cin >> f3;

	cout << endl;

	float result = (f1 + f2 + f3) / 3;
	cout << "the average of your three number is " << result;


	return 0;
}