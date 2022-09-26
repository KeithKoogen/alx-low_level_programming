#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of byte
* @s: a string
* @accept: a string to look for
* Return: a string with only the matching characters
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	j = 0;

	while (accept[i] != '\0')
	{
		++i;
	}

	while (s[j] != '\0')
	{
		for (k = 0; k < i; k++)
		{
			if (s[j] == accept[k])
			{
				
				return (s + j);
			}
		}
		++j;
	}
	
	return (NULL);
}
