#include "main.h"

/**
* slen - returns length of string
* @s: a string
* Return: an integer length
*/

unsigned int slen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}

/**
* string_nconcat -  concatenates two strings
* @s1: a string
* @s2: a string
* @n: number of bytes to copy from a2
* Return: a pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k, len_s1, len_s2;

	len_s1 = 0;
	len_s2 = 0;
	i = 0;

	len_s1 = slen(s1);
	len_s2 = slen(s2);

	while (s2[len_s2] != '\0')
		++len_s2;

	if (n >= len_s2)
	{
	n = len_s2;
	}
	ptr = malloc((sizeof(s1)) + (n * sizeof(char *)));

	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}
	}

	if (s2 != NULL)
	{
		for (k = 0; k < n; k++)
		{
			ptr[len_s1 + k] = s2[k];
		}
	}

	ptr[len_s1 + n] = '\0';

	return (ptr);
}
