#include "main.h"
#include <stddef.h>

/**
* _strstr - locates a substrin
* @haystack: a string to search in
* @needle: a string to search for
* Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	
	int i, j, k, m;
	
	i = 0;
	j = 0;
	
	while (needle[i] != '\0')
		++i;
	
	while (haystack[j] != '\0')
	{
		
		if (haystack[j] == needle[0])
		{
			m = 1;
			for (k = 1; k < i; k++)
			{
				if (haystack[j + k] == needle[k])
				{
					m++;
				}
						
			}
					
		}
		if (m == i)
			{
				return (haystack + j);
			}
		
		++j;
	}
return (NULL);
	
}
