#include "main.h"

/**
* rev_string - reverses a string
* @s: a string
*/

void rev_string(char *s)
{
int i;
int j;
int len;
char *tmp = sizeof(s);
i = 0;
len = _strlen(s);



for (i = 0; i < len; i++)
{
tmp[i] = s[len - i];

}

for (i = 0; i < len; i++)
{
tmp[i] = s[i];

}

}
