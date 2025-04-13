#include "logic.h"

bool at_least_one_odd(int number)
{
	number = number < 0 ? -number : number;

	while (number >= 10)
	{
		if (is_odd(number % 10)
			!= is_odd(number / 10 % 10))
		{
			return true;
		}
		number /= 10;
	}

	return false;
}

bool is_odd(int number)
{
	return number % 2 != 0 ? true : false;
}