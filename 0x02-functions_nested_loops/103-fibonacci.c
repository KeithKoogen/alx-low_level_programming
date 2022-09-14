#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
long int i;
long int j;
long int k;
long int tmp;
long int sum;

j = 1;
k = 2;
printf("%ld, ", j);
printf("%ld, ", k);

while (k < 4000000)
{
tmp = k + j;
j = k;
k = tmp;

if (k % 2 == 0)
{
sum = sum + k;
}
}
printf("%ld\n", sum);
return (0);
}

