#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dog - frees the memory where a dog struct is held
* @d: a pointer to a dog struct
* Return: void
*/

void free_dog(dog_t *d)
{
	void *name_block;
		
	name_block = &(d->name);
	free(name_block);
	free(d);
	
}
