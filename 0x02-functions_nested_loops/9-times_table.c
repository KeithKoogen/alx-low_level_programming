#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{

int i;
int j;
int firstnum;
int lastnum;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if ((i * j) >= 10)
{
firstnum = (i * j) / 10;
lastnum = (i * j) % 10;
_putchar(firstnum + 48);
_putchar(lastnum + 48);
}
else
_putchar((i * j) + 48);
if (j < 9)
{
_putchar(44);
if ((j + 1) * i >= 10)
{
_putchar(32);
}
else
{
_putchar(32);
_putchar(32);
}
}
}
_putchar('\n');
}


}
