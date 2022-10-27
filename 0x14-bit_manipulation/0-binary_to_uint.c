#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: array pointing to a string of 0 and 1 chars
* Return: an unsiged int value converted from binary to decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, digit;

	if (b == NULL)
		return (0);

	i = 0;
	digit = 0;
	j = 1;

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);

		digit = (b[i] - 48) * j;

		j = j * 2;
		++i;
	}

	return (digit);

}
