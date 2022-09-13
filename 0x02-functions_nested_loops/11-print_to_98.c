#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * Return: Void
 * @n: Integer
 */

void print_to_98(int n)
{
int i;
int firstnum;
int secondnum;
for (i = n; i < 99; i++)
{
if (i > 9)
{
firstnum = i / 10;
secondnum = i % 10;
_putchar(firstnum + 48);
_putchar(secondnum + 48);
}
else
{
_putchar(i + 48);
}
if (i < 98)
{
_putchar(',');
_putchar(32);
}
}
_putchar('\n');
}
