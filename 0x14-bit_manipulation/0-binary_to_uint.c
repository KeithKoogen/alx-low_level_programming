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
	unsigned int i, digit, j;

	if (b == NULL)
		return (0);

	i = strlen(b);
	digit = 0;
	j = 1;

	j = i;
	printf("%d", i);
	
	printf("%c", b[j - 1]);

	return (digit);

}
