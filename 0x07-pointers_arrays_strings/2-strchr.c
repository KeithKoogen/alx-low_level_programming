#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: a string
* @c: a char to look for
* Return: a pointer to the first occurance of the character;
*/

char *_strchr(char *s, char c)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s+i);
			break;
		}
		++i;
	}
	return (NULL);
}
