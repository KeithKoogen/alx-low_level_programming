#include <stdio.h>



/**
* main - prints the alphabet in lower case
* Return: returns 0
*/



int main(void)
{
int i;


for (i = 0; i < 26 ; i++)

{

putchar(i + 97);

}


for (i = 0; i < 26 ; i++)
{
putchar(i + 65);
}

putchar('\n');



return (0);

}
