#include "main.h"

/**
* clear_bit - sets a given index bit to 0
* @n: a number
* @index: the index of the bit
* Return: 1 if works or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);

}
