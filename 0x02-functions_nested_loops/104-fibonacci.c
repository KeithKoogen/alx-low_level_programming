#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
double i;
double j;
double k;
double tmp;

j = 1;
k = 2;
printf("%.f, ", j);
printf("%.f, ", k);

for (i = 0; i < 98; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%.f", k);
if (i == 95)
{
break;
}
printf(", ");
}
printf("\n");
return (0);
}
