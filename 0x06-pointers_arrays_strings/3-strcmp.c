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
int value;
value = 0;
i = 0;
while (s1[i] != '\0')
{
if[s1[i] == s2[i])
{
value = 0;
i++;
}
else
{
value = s1[i] - s2[i];
break;
}
   
}



return (value);
}
