#include "main.h"

/**
* create_array -  creates an array of chars, and initializes it with a specific char
* @size: size of array
* @c: a character
* Return: a pointer to array
*/

char *create_array(unsigned int size, char c)
{
	
	char *p;
	int i;
	
	p = malloc(sizeof(char) * size);
	
	if (p == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	
	return (p);
	
}
