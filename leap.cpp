/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab1C

Description: This program asks the user to input a valid year. Then it will check to see if the year is a leap year or not and print the result on the console.
*/

#include <iostream>

int main()
{
	int year = 0;
	std::cout << "Enter a valid year: ";
	std::cin >> year;

	if (!(year % 4 == 0))
	{
		std::cout << "Common year" << std::endl;
	}
	else if (!(year % 100 == 0))
	{
		std::cout << "Leap year" << std::endl;
	}
	else if (!(year % 400 == 0))
	{
		std::cout << "Common year" << std::endl;
	}
	else
	{
		std::cout << "Leap year" << std::endl;
	}

	return 0;
}
