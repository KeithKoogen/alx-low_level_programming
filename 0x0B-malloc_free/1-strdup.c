#include "main.h"

/**
* _strdup - copy of the string given as a parameter
* @str: a string
* Return: a pointer to a string
*/

char *_strdup(char *str)
{
	char *p;
	int length, i;
	
	if (str == NULL)
	{
		return (NULL)
	}
	length = 0;

	while (str[length] != '\0')
		++length;

	p = malloc(sizeof(char) * length);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		p[i] = str[i];
	}

	return (p);

}
