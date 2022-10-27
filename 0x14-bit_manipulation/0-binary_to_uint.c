#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: array pointing to a string of 0 and 1 chars
* Return: an unsiged int value converted from binary to decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, digit, k;

	if (b == NULL)
		return (0);

	i = strlen(b);
	digit = 0;
	j = 1;

	for (k = i; k > 0; k--)
	{
		if (b[k] < 48 || b[k] > 49)
			return (0);

		digit = digit + ((b[k] - 48) * j);

		j = j * 2;
	
	}

	return (digit);

}
