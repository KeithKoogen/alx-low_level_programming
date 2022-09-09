#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 * main - prints whether the number generated is positive, negative or zero
 * Return: returns 0
*/

int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}

return (0);

}
