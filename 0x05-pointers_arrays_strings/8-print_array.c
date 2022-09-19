#include "main.h"

/**
* print_array - prints n number of elements in array of int
* @a: an array of integers
* @n: number of elements to print
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d"a[i]);
if (i != n - 1)
printf(", ");
}
}
