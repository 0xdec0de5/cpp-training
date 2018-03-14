#include <iostream>

using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;

	cout << "Please enter your first number: ";
	cin >> number1;

	cout << endl;

	cout << "And your second number? ";
	cin >> number2;

	cout << endl;

	int numberResult = number1 + number2;
	cout << "The result is " << numberResult;


	return 0;
}