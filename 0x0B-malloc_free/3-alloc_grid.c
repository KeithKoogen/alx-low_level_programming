#include "main.h"

/**
* alloc_grid -  pointer to a 2 dimensional array of integers
* @width: width of 2d array
* @height: height of 2d array
* Return: pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	
	int **ptr;
	int i, j;
	
	if (width == 0 || height == 0)
		return (NULL);
	
	ptr = malloc((sizeof(int) * width) * (sizeof(int) * height));
	
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
			 
	return (ptr);
	
}
