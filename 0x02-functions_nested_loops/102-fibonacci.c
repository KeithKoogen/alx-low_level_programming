#include <stdio.h>

/** main - print fibonacci sequence startig with 1 and 2
* Return: Void
*/

int main(void)
{
int i;
int j;
int k;
int tmp;
  
j = 1;
k = 2;
printf("%d, ", i);
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
