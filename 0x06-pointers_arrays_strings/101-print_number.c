#include "main.h"

/**
* print_number - prints integers
* @n: integer to ptint
* Return: Void
*/

void print_number(int n)
{
	unsigned int num;
	int i;
	int j;
	int times;
	times = 1;
	j =1;
	i = 0;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	
	while (num / j > 10)
	{
		j *= 10;
		times++;
	}
	
	for (i = 0; i < times + 1)
	{
	
	_putchar((num % j) + 48)
		j = j / 10;
		}
}
	
