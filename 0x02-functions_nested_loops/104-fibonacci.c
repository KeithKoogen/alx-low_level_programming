#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
unsigned long float i;
unsigned long float j;
unsigned long float k;
unsigned long float tmp;

j = 1;
k = 2;
printf("%.fl, ", j);
printf("%.fl, ", k);

for (i = 0; i < 98; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%.fl", k);
if (i == 95)
{
break;
}
printf(", ");
}
printf("\n");
return (0);
}
