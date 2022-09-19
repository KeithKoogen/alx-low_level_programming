#include "main.h"

/**
* rev_string
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
i = i - 1;

for (j = 0; j < (i / 2); j++)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
}

}
