#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line
* @size: Size of triangle in integer
* Return: VOid
*/
void print_triangle(int size)
{
int i;
int j;
int k;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size - (i + 1); j++)
{
printf(" ");
}
for (k = 0; k < i + 1; k++)
{
printf("#");
}
printf("\n");
}
}
else
{
printf("\n");
}
}
