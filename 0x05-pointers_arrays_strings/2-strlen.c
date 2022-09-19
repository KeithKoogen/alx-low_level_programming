#include "main.h"

/**
* int _strlen - returns the length of a string
* @s: a string
* Return: length of string
*/

int _strlen(char *s)
{
int i;
int j;
j = 0;
while (s[i] != '\0')
{
j++;
i++;
}

return (j);
}
