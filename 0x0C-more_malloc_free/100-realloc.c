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
	void *newptr;
	int i, j;
	
	if (old_size == new_size)
		return (ptr);
	
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	if (new_size > old_size && ptr != NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = ptr[i];
		}
		free(ptr);
	}
	
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		return (NULL);
	}
	
	return (newptr);
}
