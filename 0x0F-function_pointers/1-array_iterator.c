#include <stddef.h>
/**
* array_iterator -  executes a function given as a parameter
* @array: an array of integers
* @size: size of array
* @action: a function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	void (*ptr)(int);
	
	ptr = action;

	while (i < size)
	{
		(*ptr)(array[i]);
		++i;
	}

}
