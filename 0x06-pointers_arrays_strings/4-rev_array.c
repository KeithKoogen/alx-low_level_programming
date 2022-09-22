#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: an array of integers
* @n: the number of elements in the array;
* Return void
*/

void reverse_array(int *a, int n)
{
int tmp[n];
int i;
i = n - 1;

if (n > 0)
{
while (i > -1)
{
tmp[n - i] = a[i];
--i;
}

for (i = 0; i < n; i++)
{
a[i] = tmp[i];
}
}
}
