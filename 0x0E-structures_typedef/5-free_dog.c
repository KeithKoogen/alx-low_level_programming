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
	free(d->name);
	free(d->owner);
	free(d);
	
}
