#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints a struct dog
* @d: a pointer to a struct dog
* Return: void
*/

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d != NULL)
	{
		if (d->name != 0)
		{
			name = d->name;
			printf("Name: %s\n", name);
		}
		else
		{
			printf("Name: nil\n");
		}

		if (d->age != 0)
		{
			age = d->age;
			printf("Age: %f\n", age);
		}
		else
		{
			printf("Age: nil\n");
		}

		if (d->owner != 0)
		{
			owner = d->owner;
			printf("Owner: %s\n", owner);
		}
		else
		{
			printf("Owner: nil\n");
		}

	}

}
