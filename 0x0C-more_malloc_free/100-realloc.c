#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: a pointer
* @old_size: the old size
* @new_size: the new size
* Return: a pointer to a new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *chrptr, *ptr1;
	void *newptr;
	unsigned int i;
	
	if (old_size == new_size)
		return (ptr);
	
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = ptr;
	if (new_size > old_size && ptr != NULL)
	{
		chrptr = malloc(new_size);
		if (chrptr == NULL)
			return (NULL);
		
		for (i = 0; i < old_size; i++)
		{
			chrptr[i] = ptr1[i];
		}
		free(ptr);
	}
	
	if (ptr == NULL)
	{
		chrptr = malloc(new_size);
		if (chrptr == NULL)
		return (NULL);
	}
	
	newptr = chrptr;
	
	return (newptr);
}
