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

	return ptr;

}
