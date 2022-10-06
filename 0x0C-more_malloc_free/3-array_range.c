#include "main.h"

/**
* array_range - creates an array of integers
* @min: int to start at
* @max: int to end at
* Return: a pointer to array of integers
*/

int *array_range(int min, int max)
{

	int i, k;
	int *ptr;

	i = 0;
	k = 0;

	if (min > max)
		return (NULL);

	i = max - min;

	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);

	
	for (k = 0; k < (i + 1); k++)
	{
		ptr[k] = k + min;
	}

	return (ptr);
}
