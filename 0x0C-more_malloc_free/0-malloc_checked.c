#include "main.h"

/**
* malloc_checked - allocates memory
* @b: unsigned int
* Return: void
*/

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL || b == 0)
		exit();

	return ptr;

}
