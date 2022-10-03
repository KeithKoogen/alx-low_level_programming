#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: a string
* @s2: a string
* Return: a pointer to a new string
*/

char *str_concat(char *s1, char *s2)
{

	int i, j, k;
	char *ptr;

	i = 0;
	j = 0;

	if (s1 != NULL)
	while (s1[i] != '\0')
		++i;

	if (s2 != NULL)
	while (s2[j] != '\0')
		++j;

	ptr = malloc((sizeof(char) * (i + j)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	for (k = 0; k < j; k++)
		ptr[i + k] = s2[k];
	ptr[i + k + 1] = '\0';
	return (ptr);
}
