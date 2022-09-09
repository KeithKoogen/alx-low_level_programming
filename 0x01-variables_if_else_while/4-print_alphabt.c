#include <stdio.h>

/**
 * main - prints alphabet except q and e
 * Return: returns 0
 */
int main(void)
{
int i;

for (i = 0; i < 26 ; i++)
{
if (i == 4 || i == 16)
{

}
else
{
putchar(i + 97);
}
}
putchar('\n');

return (0);
}
