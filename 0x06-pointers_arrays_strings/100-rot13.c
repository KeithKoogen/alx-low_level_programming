#include "main.h"
/**
* rot13 - converts a string to rot13
* @str: a string
* Return: return a pointer to a string
*/

char *rot13(char *str)
{
	int i;
	int j;
	char alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cypher[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	while (str[i] != '\0')
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (alphabet[j] == str[i])
			{
				str[i] = cypher[j];
			}
		}
	}
return (str);
}
