#include "main.h"

/**
* argstostr - concatenates all the arguments of a program
* @ac: number of strings
* @av: 2d array of char
* Return: a pointer to a string
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, count;

	count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			++j;

		count = count + j;
	}

	ptr = malloc((sizeof(char) * count) + (sizeof(char) * ac));
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[i][j] = av[i][j];

		}
		ptr[i][j + 1] = '\n';

	}
return (ptr);
}
