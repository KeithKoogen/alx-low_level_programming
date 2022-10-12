/**
* int_index - searches for an integer
* @array: an array of int
* @size: size of array
* @cmp: pointer to function
* Return: an integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int (*ptr)(int);
	int i;

	ptr = cmp;
	
	if (ptr == NULL || array == NULL)
		return (-1)

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if ((*ptr)(array[i]) != 0)
			return (i);
		++i;
	}


	return (-1);

}
