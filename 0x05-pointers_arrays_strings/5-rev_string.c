#include "main.h"

/**
* rev_string - reverses a string
* @s: a string
*/

void rev_string(char *s)
{
int i;
int j;
char tmp;
i = 0;
j = 0;

while (s[i] != '\0')
{
i++;
}


for (j = 0; j < (i / 2); j++)
{
tmp = s[j];
s[j] = s[i - 1];
s[i - 1] = tmp;
i--;
}

}
