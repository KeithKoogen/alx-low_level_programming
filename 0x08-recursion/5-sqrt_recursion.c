#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: a number
* Return: an Integer
*/

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (sqrt * sqrt == n)
		{
			return (sqrt);
		}
		else if (sqrt < n)
		{
			++sqrt;
			return (_sqrt_recursion(n));
		}
		else
		{
			return (-1);
		}
	}

}
