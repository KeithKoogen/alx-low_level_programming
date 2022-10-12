/**
* int_index - searches for an integer
* @array: an array of int
* @size: size of array
* @cmp: pointer to function
* Return: an integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		++i;

	}


	return (-1);

}
