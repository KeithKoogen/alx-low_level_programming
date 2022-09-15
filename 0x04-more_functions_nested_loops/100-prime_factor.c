#include "main.h"

/**
 * main - print the highest prime factor
 * Return: void
 */

int main(void) 
{
  long n;
  long i;
  long j;
  long count;
  long prime;
  n = 612852475143;

  for (i = 2; i < n; i++) 
  {
    count = 0;
    if (n % i == 0) 
    {
      for (j = i; j > 2; j--) 
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
  printf("%ld\n", prime);
  return (0);
}
