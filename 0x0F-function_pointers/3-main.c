#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - performs different ops on numbers based on input
* @argc: number of arguments
* @argv: array of arguments
* Return: void
*/

int main(char *argv[])
{
	int a, b, n;
	char *s;
	
	
		printf("%s",argv[0]);

	a = atoi(argv[0]);
	b = atoi(argv[2]);
	s = argv[1];

	n = (*get_op_func(s))(a, b);
	printf("%d\n", n);
	

	return (0);

}
