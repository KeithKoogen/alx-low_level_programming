#include "main.h"

/**
* main - print the highest prime factor
* Return: void
*/

int main(void)
{
int n;
int i;
int j;
int count;
int prime;
n = 612852475143;
  
  for (i = 2; i < n; i++)
  {
    count = 0;
    if (n % i == 0)
    {
   for (j = i; i > 1; j--)
   {
     if (i % j == 0)
     {
       count = count + 1;
     }
   }
      
      }
		if (count == 1)
		{
			prime = i;
		}
  }
	printf("%d\n", prime);
}
