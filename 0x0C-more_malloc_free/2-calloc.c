#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i,total_size;
	char *p,*q;

	total_size = nmemb * size;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	if((p = q = malloc(total_size)) != NULL)
		for(i = 0; i < nb; i++)
			*p++ = 0;
	
	return q;
}
