#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: a number to be printed in binary
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	if (n == 1)
		_putchar(49);
	if (n > 1)
	{
		while (n != 0)
		{
			if (n & 1)
			{
				putchar(49);
			}
			else
			{
				putchar(48);
			}
			n = n >> 1;

		}
	}

}
