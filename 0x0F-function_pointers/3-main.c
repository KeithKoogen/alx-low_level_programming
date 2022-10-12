#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - performs different ops on numbers based on input
* @argc: number of arguments
* @argv: array of arguments
* Return: void
*/

int main(int argc, char *argv[])
{
	int a, b, n, *f;
	char *s;
	
	
	printf("%s",argv[1]);
	
	a = argv[1];
	b = argv[3];
	s = argv[2];
	
	n = (*get_op_func(s))(a, b);

	
	printf("%d\n", n);
	

	return (0);

}
