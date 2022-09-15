#include "main.h"
/**
* main - The Fizz buzz test
* Return: Void
*/
int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (((i + 1) % 3 == 0) && ((i + 1) % 5 == 0))
{
printf("FizzBuzz ");
}
else if ((i + 1) % 3 == 0)
{
printf("Fizz ");
}
else if ((i + 1) % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d", i + 1);
}
}
printf("\n");
return (0);
}
