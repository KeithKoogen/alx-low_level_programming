#include "main.h"

/**
* more_numbers -  prints 10 times the numbers, from 0 to 14
* Return: Void
*/

void more_numbers(void)
{
int i;
for (i = 0; i < 15; i++)
{
if (i < 10)
{
_putchar(i + 48);
}
else
{
_putchar(i + 48 - 9);
}
}
_putchar('\n');
}
