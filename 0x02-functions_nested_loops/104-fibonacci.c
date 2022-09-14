#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
unsigned long i;
unsigned long j;
unsigned long k;
unsigned long tmp;

j = 1;
k = 2;
printf("%i, ", j);
printf("%i, ", k);

for (i = 0; i < 98; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%i", k);
if (i == 95)
{
break;
}
printf(", ");
}
printf("\n");
return (0);
}
