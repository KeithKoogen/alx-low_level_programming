#include "main.h"

/**
* string_toupper - makes all letters upercase in a string
* @str: a string
* Return: a String
*/

char *string_toupper(char *str)
{
int i;
i = 0;
while (str != '\0')
{
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - 32;
	}
	++i;
}

return (str);
}
