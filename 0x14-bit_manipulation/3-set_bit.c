#include "main.h"

/**
* set_bit - sets a bit to 1
* @n: the number
* @index: the bit to change
* Return: 1 if success or -1 if error
*/


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	
	i = *n;
	i |= 1 << index;
	
	return (i);
	
}
