#include <stdio.h>

/** main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
long int i;
long int j;
long int k;
long int tmp;

j = 1;
k = 2;
printf("%d, ", j);
printf("%d, ", k);
  
for (i = 0; i < 50; i++)
{
tmp = k + j;
j = k;
k = tmp;
printf("%d", k);
if (i == 49)
{
break;
}
printf(", ");
}
  
return (0);
}
