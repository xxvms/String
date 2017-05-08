// String.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>


int main()
{
	const int MAX = 10; // max characters in string
	char strings[MAX]; // string variable strings

	std::cout << "Enter a string in C Way: ";
	std::cin >> strings; // put string in variable strings
	
	std::string dupaJasia;
	std::cout << "Enter string in C++ way: ";
	std::cin >> dupaJasia;


			//display string from strings
	std::cout << "You have entered C Way: " << strings << std::endl;
	std::cout << "You have entered C++ way: " << dupaJasia << std::endl;

	system("pause");
    return 0;
}

