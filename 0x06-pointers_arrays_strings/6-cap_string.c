#include "main.h"

/**
* cap_string - Capitalizes first words of a string
* @str: a string
* Return: a pointer to the string
*/

char *cap_string(char *str)
{
	int i;
	i = 0;
if (str[0] > 96 && str[0] < 123)
	str[0] = str[0] - 32;
	
while (str[i] != '\0')
{
	if ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65) || (str[i] > 122 && str[i] < 127) || (str[i] == '\n'))
			{
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
}
			return (str);
	
}
  
