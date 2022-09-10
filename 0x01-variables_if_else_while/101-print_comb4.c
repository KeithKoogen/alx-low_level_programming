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

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{

for (k = j + 1; k < 10; k++)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
if (i < 7)
{
putchar(44);
putchar(32);
}
}
}
}

putchar('\n');
return (0);

}
