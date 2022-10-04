#include "main.h"

/**
* argstostr - concatenates all the arguments of a program
* @ac: argument count
* @av: 2d array of char
* Return: a pointer to a string
*/

char *argstostr(int ac, char **av)
{
	char *ptr, *p;
	int i, count;
	
	i = 0;
	

	count = 0;
	

	if (ac == 0 || av == NULL)
		return (NULL);
	
for (p = &av[0][1]; p != NULL; p++)
	{
		++count;
	}
	
		

	
	ptr = malloc((sizeof(av) * (ac + 1) * (count + 1)));
	
	if (ptr == NULL)
		return (NULL);


	i = 0;

	for (p = &av[0][1]; p != NULL; p++)
	{
		if (*p == '\0')
		{
			ptr[i] = '\n';
		}
		else
		{
		ptr[i] = *p;
		}
		i++;
	}
	
return (ptr);
}
