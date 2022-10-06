#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *ptr;
	void *ptr2;

	total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(total_size);
	
	ptr2 = ptr;
	
	if (ptr == NULL)
		return (NULL);

	for(i = 0; i < total_size; i++)
			*ptr++ = 0;
	
	return ptr2;
}
