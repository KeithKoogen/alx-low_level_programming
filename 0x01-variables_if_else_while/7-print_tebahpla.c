#include <stdio.h>

/**
* main - prints alphabet in reverse
* Return: 0
*/

int main(void)
{
int i;

for (i = 26; i > 0; i--)
{
putchar(i + 96);
}

putchar('\n');

return (0);

}
