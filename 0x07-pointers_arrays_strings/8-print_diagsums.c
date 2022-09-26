#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers
* @a: a pointer
* @size: size of array in integer
* Return: void
*/

void print_diagsums(int *a, int size)
{

	int i;
	int j;
	int total, total_opposite;

	total = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{

		total = total + a[(i*size)+j];
		++j;
	}

	
	for (i = 0; i < size; i++)
	{

		total_opposite = total_opposite + a[(i*size)+j];
		--j;
	}

	printf("%d, %d\n", total, total_opposite);
	
}
