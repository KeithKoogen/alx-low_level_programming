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
	unsigned int i, digit, k;

	if (b == NULL)
		return (0);

	i = strlen(b);
	k = 0;
	digit = 0;

	for (k = 0; k < i; --k)
	{
		printf("%c", b[k]);
	
	}

	return (digit);

}
