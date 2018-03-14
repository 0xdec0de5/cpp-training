/*
Say Hey is my program
*/
#include <iostream>
#include <string>

int main()
{
	// This is a *variable* named *username* that holds *string* data type
	std::string username;

	// *cout* lets us output some text to the console
	std::cout << "Please enter your name: ";

	// cin will promt the console to wait for user input and then push
	// the input into the variable username
	std::cin >> username;

	std::cout << std::endl;

	std::cout << "Hey! " << username << " nice to meet you!";

	// return in this method signals the program to exit
	return 0;
}