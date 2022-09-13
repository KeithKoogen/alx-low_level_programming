#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * Return: Void
 * @n: Integer
 */

void print_to_98(int n)
{
int i;
int firstnum;
int secondnum;


 if (n > 98)
   {
     for (i = n; i > 97; i--)
       printf("%d, ",i);

   } else
   {
 
for (i = n; i < 99; i++)
{


printf("%d, ",i);
 
}
   }
 printf("98");
_putchar('\n');
}
