#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: an integer
* @y: the power to be raised by
* Return: an integer
*/

int _pow_recursion(int x, int y)
{
	
	if (y < 1)
	{
		return (-1);
	}
	
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	
}
