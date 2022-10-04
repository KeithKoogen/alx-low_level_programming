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
	

	
		
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			++j;
			++count;			
		}
		i++;
	}
	
	ptr = malloc((sizeof(av) * (ac + 1) * (count + 1)));
	
	if (ptr == NULL)
		return (NULL);


	i = 0;

	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*(ptr + i + j) = av[i][j];
			j++;

		}
		++i;
		
	}
	
return (ptr);
}
