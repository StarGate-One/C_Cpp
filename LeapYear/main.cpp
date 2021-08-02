
#include <iostream>

int int_year;
bool bool_leap = 0;

int main(void)
{
	std::cout << "Enter year in ccyy format to check for a Leap Year? ";
	std::cin >> int_year;

	if ((int_year % 400 == 0) or
		((int_year % 100 != 0) and (int_year % 4 == 0)))
	{
		bool_leap = 1;
	}

#ifdef _DEBUG
	std::cout << "Year / 400: " << int_year % 400 << std::endl;
	std::cout << "Year / 100: " << int_year % 100 << std::endl;
	std::cout << "Year / 4: " << int_year % 4 << std::endl;
	std::cout << "bool leap: " << bool_leap << std::endl;
#endif

	std::cout << "Year: " << int_year << " is";
	if (not bool_leap)
	{
		std::cout << " NOT";
	}
	std::cout << " a leap year!" << std::endl;
}