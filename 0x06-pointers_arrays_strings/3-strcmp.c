#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1:
* @s2:
* Return: an integer, 0 is strings match, else a non zero value
*/

int _strcmp(char *s1, char *s2)
{
int i;
int s1_value;
int s2_value;

s1_value = 0;
s2_value = 0;
i = 0;
while (s1[i] != '\0')
{
	s1_value = s1_value + s1[i];
	++i;
}

i = 0;
while (s2[i] != '\0')
{
	s2_value = s1_value + s1[i];
	++i;
}

return (s2_value - s1_value);
}
