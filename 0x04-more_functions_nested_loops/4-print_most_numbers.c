#include "main.h"
/**
* print_most_numbers - prints the numbers, from 0 to 9 excluding 2 and 4
* Return: Void;
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2)
{
if (i != 4)
_putchar(i + 48);
}
}
_putchar('\n');
}
