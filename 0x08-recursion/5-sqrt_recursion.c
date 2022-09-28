#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: a number
* Return: an Integer
*/

int _sqrt_recursion(int n)
{
	int sqrt;
	sqrt = n - 1;
	
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt * sqrt != n && sqrt > -1)
	{
		
		return (_sqrt_recursion(n));
		sqrt--;
	}
	else
	{
		return (-1);
	}
	
}
