#include "main.h"

/**
* get_bit - returns the values of a bit at given index
* @n: the number
* @index: the index
* Return: an integer value of the bit;
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = n >> index;

	i = i & 1;

	if (n < 0)
		return (-1);


	return (i);
}
