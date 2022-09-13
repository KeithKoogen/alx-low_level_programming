#include "main.h"
/**
 * print_times_table - prints n times table
 * Return: Void
 * @n: integer for times to count from 0
 */

void print_times_table(int n)
{
int i;
int j;
if (n < 16 && n > 0)
{
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
printf("%d", i * j);
if (j < n)
{
if ((j + 1) * i >= 100)
{
printf(", ");
}
else if ((j + 1) * i >= 10)
{
printf(",  ");
}
else printf(",   ");
}

else
{
printf("\n");
}
}
}
}
}
