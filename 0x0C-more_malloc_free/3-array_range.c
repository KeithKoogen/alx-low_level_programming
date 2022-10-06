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

	if (min == 0 && max == 0)
		return (NULL);

	i = max - min;

	ptr = malloc(sizeof(int *) * i);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = k + min;
	}

	ptr[i] = max;

	return (ptr);
}
