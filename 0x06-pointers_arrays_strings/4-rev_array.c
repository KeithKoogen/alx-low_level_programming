#include "main.h"
#include "stdlib.h"

/**
* reverse_array - reverses an array of integers
* @a: an array of integers
* @n: the number of elements in the array;
* Return void
*/

void reverse_array(int *a, int n)
{
int *tmp = malloc(sizeof(int) * n);
int i;
i = n;


if (n > 0)
{
while (i > -1)
{
tmp[n - i] = a[i - 1];
--i;
}

for (i = 0; i < n; i++)
{
a[i] = tmp[i];
}
}
free(tmp);
}
