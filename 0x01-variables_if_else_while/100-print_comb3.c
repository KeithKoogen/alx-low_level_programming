#include <stdio.h>

/**
* main - print 2 digit number combinations not repeating
* Return: 0
*/

int main(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + 48);
putchar(j + 48);
if (i < 8)
{
putchar(44);
putchar(32);
}
}

}
putchar('\n');
return (0);

}
