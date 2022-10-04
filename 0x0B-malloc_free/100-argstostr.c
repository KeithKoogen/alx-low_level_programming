#include "main.h"

/**
* argstostr - concatenates all the arguments of a program
* @ac: argument count
* @av: 2d array of char
* Return: a pointer to a string
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, count;
	
	i = 0;
	j = 0;

	count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	ptr = malloc((sizeof(av) * ac));
	
	if (ptr == NULL)
		return (NULL);
	
		
	
	for (i = 0; i < ac; i++)
	{
		
		while (av[i][j] != '\0')
		{
			++j;
			++count;
			ptr + i + j = malloc(sizeof(char *));
		}
	}
	




	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*(ptr + i + j) = av[i][j];

		}
		*(ptr + i + j + 1) = '\n';

	}
return (ptr);
}
