#include <stdio.h>
/**
 * main - print 2 digit number combinations not repeating
 * Return: 0
 */

int main(void)
{
int i;
int j;
int k;
int m;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
m = j + 1;
for (k = i; k < 10; k++)
{
for (; m < 10 ; m++)
{

if (i == 9 && j == 9 && k == 9 && m == 10)
{
break;
}
putchar(i + 48);
putchar(j + 48);
putchar(32);
putchar(k + 48);
putchar(m + 48);
if (i == 9 && j == 8 && k == 9 && m == 9)
{
break;
}
putchar(44);
putchar(32);
}
m = 0;
}
}
}
putchar('\n');
return (0);
}
