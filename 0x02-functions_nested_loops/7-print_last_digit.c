#include "main.h"
#include "stdio.h"
#include "limits.h"
/**
 * print_last_digit - print last digit of an integer
 * @n: an integer value
 * Return: 0
 */

int print_last_digit(int n)
{
int j;

if (n == INT_MIN)
{
n = INT_MAX;
}

if (n < 0)
{
n = -n;
}
j = n % 10;
_putchar(j + 48);
return (j);
}
