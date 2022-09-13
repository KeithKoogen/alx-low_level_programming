#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number input
 * Return: 1 if number is positive, -1 if num is negative, 0 if num is 0
 */

int print_sign(int n)
{
  
if (n > 0)
{
_putchar('+');
return (1);
}else if (n == 0)
{
_putchar('0');
return (0);
}else {
_putchar('-');
return (-1);
}
 
}
