#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: a string
* @accept: a substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	count = 0;

	while (accept[i] != '\0')
		++i;

	while (s[j] != '\0')
	{
		for (k = 0; k < i; k++)
		{
			if (s[j] == accept[i])
				count++;
		}
		++j;
	}

	return (count);
}
