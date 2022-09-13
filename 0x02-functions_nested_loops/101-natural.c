#include "main.h"

/**
 * main - prints the sum of natural numbers
 * Return: Void
 */

int main(void)
{
int i;

int sum;
sum = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d", sum);
return (0);
}
