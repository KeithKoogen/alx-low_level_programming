#include <stdio.h>



/**
* main - prints the alphabet in lower case
* Returns: returns 0
*/



int main(void)
{



for (int i = 0; i < 26 ; i++)

{

putchar(i + 97);

}


for (int i = 0; i < 26 ; i++)
{
putchar(i + 65);
}

putchar('\n');



return (0);

}
