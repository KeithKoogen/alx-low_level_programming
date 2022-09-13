#include "main.h"
#include "stdio.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: an integer value
 * Return: 0
 */

int print_last_digit(int n)
{
int j;


if (n < 0)
{
n = n * -1;
}
j = n % 10;
_putchar(j + 48);
return (j);
}
