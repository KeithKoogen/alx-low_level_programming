#include "main.h"

/**
* _memset -  fills memory with a constant byte
* Return: a char
* @s: a string
* @b: a char to be in all bytes
* @n: integer number of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
