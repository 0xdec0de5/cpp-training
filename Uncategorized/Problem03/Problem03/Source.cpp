#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r = 0.0f;
	const float pi = 3.14;

	cout << "Please enter the radius of a circle ";
	cin >> r;

	//Diameter -> 2 * r
	//Circumference -> d * pi
	//Area -> pi * r^2

	float d = r * 2;
	float c = d * pi;
	float a = pi * powf(r, 2); /*r * r*/;

	cout << "Your circle has the following properties:" << endl
		<< "\n\t" << "Diameter:\t" << d
		<< "\n\t" << "Circumference:\t" << c
		<< "\n\t" << "Area:\t" << a;

	return 0;
}