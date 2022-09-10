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

for (k = i; k < 10; k++)
{
for (m = j + 1; m < 10; m++)
{

putchar(i + 48);
putchar(j + 48);
putchar(32);
putchar(k + 48);
putchar(m + 48);


putchar(44);
putchar(32);

}
}
}

}

putchar('\n');
return (0);

}
