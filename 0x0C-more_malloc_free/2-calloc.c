#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*ptr++ = 0;

	return (ptr);
}