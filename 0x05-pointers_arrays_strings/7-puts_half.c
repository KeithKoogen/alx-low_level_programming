#include "main.h"

/**
* puts_half - prints second half of string
* @str: a string
*/

void puts_half(char *str)
{
int i;
int j;
i = 0;
j = 0;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
for (j = 0; j < i / 2; j++)
_putchar(str[j + (i / 2)]);
}
else
{
for (j = 0; j < (i - 1) / 2; j++)
_putchar(str[j + ((i - 1) / 2)]);
}
_putchar('\n');
}
