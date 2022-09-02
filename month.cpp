/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab1D

Description: This program asks the user to input a valid year and month. Then it will check to see what month it is and print out the corresponding days in that specific month. If the month is February, then the program will use the inputted year to check if it is a leap year or not and print the amount of days accordingly. 
*/

#include <iostream>

int main()
{
	int year = 0;
	std::cout << "Input a valid year: ";
	std::cin >> year;

	int month = 0;
	std::cout << "Input a valid month: ";
	std::cin >> month;

	if (((!(month%2 == 0)) && (month < 8)) || ((month%2 == 0) && (month > 7)))
	{
		std::cout << "\n31 days" << std::endl;
	}
	else if (month != 2)
	{
		std::cout << "\n30 days" << std::endl;
	}
	else
	{
		if (!(year % 4 == 0))
		{
			std::cout << "\n28 days" << std::endl;
		}
		else if (!(year % 100 == 0))
		{
			std::cout << "\n29 days" << std::endl;
		}
		else if (!(year % 400 == 0))
		{
			std::cout << "\n28 days" << std::endl;
		}
		else
		{
			std::cout << "\n29 days" << std::endl;
		}
	}

	return 0;
}
