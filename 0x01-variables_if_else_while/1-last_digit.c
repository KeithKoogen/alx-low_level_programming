#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/**
 * main - outputs if a number is greater than 5 0r less than 6 or 7
 * Return: returns text
*/

int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;


/* your code goes there */

int last = n % 10;

if (last > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %i is %i and is 0\n", n, last);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
}

return (0);

}
