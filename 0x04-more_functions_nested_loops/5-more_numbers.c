#include "main.h"
/**
* more_numbers -  prints 10 times the numbers, from 0 to 14
* Return: Void
*/
void more_numbers(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i < 10)
{
_putchar(i + 48);
}
else
{
_putchar(49);
_putchar(i + 48 - 10);
}
}
_putchar('\n');
}
}
