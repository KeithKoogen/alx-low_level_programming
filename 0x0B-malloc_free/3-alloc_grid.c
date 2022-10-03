#include "main.h"

/**
* alloc_grid -  pointer to a 2 dimensional array of integers
* @width: width of 2d array
* @height: height of 2d array
* Return: pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	
	ptr = malloc(sizeof(int **) * height);
	*ptr[1] = malloc(sizeof(int **) * width);
		
	
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
			 
	return (ptr);
	free(ptr);
	
}
