#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @i: an integer for the size of line
* Return: Void
*/

void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i + 1; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
