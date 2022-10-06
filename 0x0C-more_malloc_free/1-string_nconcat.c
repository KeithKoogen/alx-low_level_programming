#include "main.h"

/**
* string_nconcat -  concatenates two strings
* @s1: a string
* @s2: a string
* @n: number of bytes to copy from a2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k, len_s1, len_s2;

	len_s1 = 0;
	len_s2 = 0;
	i = 0;

	if (n == 0)
		return (s1);

	while (s1[len_s1] != '\0')
		++len_s1;

	while (s2[len_s2] != '\0')
		++len_s2;

	if (n >= len_s2)
	{
	n = len_s2;
	}

	if (n > 0)
	ptr = malloc((sizeof(s1)) + (n * sizeof(char *)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}
	
	for (k = 0; k < n; k++)
	{
		ptr[len_s1 + k] = s2[k];
	}
	return (ptr);
}
