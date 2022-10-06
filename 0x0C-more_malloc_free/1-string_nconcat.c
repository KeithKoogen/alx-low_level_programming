#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	
	

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if ((len_s2 - n) < 0)
	{
		n = len_s2;
	}

	ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}

	++i;
	
	if (n > 0)
	{
	for (k = 0; k < n; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	}

	ptr[i + 1] = '\0';

	return (ptr);

}
