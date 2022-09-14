#include <stdio.h>

/**
* main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
unsigned float i;
unsigned float j;
unsigned float k;
unsigned float tmp;

j = 1;
k = 2;
printf("%.ld, ", j);
printf("%.ld, ", k);

for (i = 0; i < 98; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%.ld", k);
if (i == 95)
{
break;
}
printf(", ");
}
printf("\n");
return (0);
}
