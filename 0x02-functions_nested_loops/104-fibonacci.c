#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
long double i;
long double j;
long double k;
long double tmp;

j = 1;
k = 2;
printf("%.Lf, ", j);
printf("%.Lf, ", k);

for (i = 0; i < 98; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%.Lf", k);
if (i == 95)
{
break;
}
printf(", ");
}
printf("\n");
return (0);
}
