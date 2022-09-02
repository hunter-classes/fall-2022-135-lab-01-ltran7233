/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab1B

Description: This program asks the user to input three integers. Then there is a conditional that checks to see which integer is smaller and will print it out in the console.
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

	int thirdNum = 0;
	std::cout << "\nInput third integer: ";
	std::cin >> thirdNum;

	if ((firstNum < secondNum) && (firstNum < thirdNum))
	{
		std::cout << "The smaller of the three is " << firstNum << std::endl;
	}
	else if ((secondNum < firstNum) && (secondNum < thirdNum))
	{
		std::cout << "The smaller of the three is " << secondNum << std::endl;
	}
	else
	{
		std::cout << "The smaller of the three is " << thirdNum << std::endl;
	}

	return 0;
}
