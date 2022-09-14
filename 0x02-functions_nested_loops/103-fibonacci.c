#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
long int j;
long int k;
long int tmp;
long int sum;

j = 1;
k = 2;

while (j < 400)
{
if (j > 400)
{
break
}
tmp = k + j;
j = k;
k = tmp;

if (j % 2 == 0)
{
sum = sum + j;
}
}
printf("%ld\n", sum);
return (0);
}

