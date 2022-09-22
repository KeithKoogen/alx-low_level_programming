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
{
str[0] = str[0] - 32;
}

while (str[i] != '\0')
{
if (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
|| str[i] == ' ' || str[i] == ',' || str[i] == ';' 
|| str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '"' || str[i] == '(' || str[i] == ')'
|| str[i] == '{' || str[i] == '}')
{
if ((str[i + 1] > 96) && (str[i + 1] < 123))
{
str[i + 1] = str[i + 1] - 32;
}
}
++i;
}
return (str);
}
