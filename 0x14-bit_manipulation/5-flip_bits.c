#include "main.h"

/**
* flip_bits - counts the number of bits to flip from one number to another
* @n: the number
* @n: the number to flip
* Return: Number of bits as an int
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;
	unsigned int index;

	count = 0;
	index = sizeof(n) * 8;

	for (i = 0; i < index; i++)
	{
		if (((n >> i & 1) ^ (m >> i & 1)) == 1)
				++count;
	}

	return (count);
}
