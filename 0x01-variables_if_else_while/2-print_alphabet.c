#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Returns: returns 0
 */

int main(void)
{
int i;
for (i = 0; i < 26 ; i++)
{
putchar(i + 97);
}

putchar('\n');

return (0);

}
