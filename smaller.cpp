/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab1A

Description: This program asks the user to input two integers. Then there is a conditional that checks to see which integer is smaller and will print it out in the console.
*/

#include <iostream>

int main()
{
	int firstNum = 0;
	std::cout << "Input first integer: ";
	std::cin >> firstNum;

	int secondNum = 0;
	std::cout << "\nInput second integer: ";
	std::cin >> secondNum;

	if (firstNum < secondNum)
	{
		std::cout << "The smaller of the two is " << firstNum << std::endl;
	}
	else
	{
		std::cout << "The smaller of the two is " << secondNum << std::endl;
	}

	return 0;
}

