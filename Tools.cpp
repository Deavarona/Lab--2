#include "Tools.h"

double inputNumber()
{
	double number;
	while (1)
	{
		std::cin >> number;
		if (std::cin.get() == '\n')
		{
			return number;
		}
		else
		{
			std::cout << "Incorrect input!" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cout << "Number: ";
		}
	}
}