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
	int n, i;
	char *s;
	
	i = argc;
	i = i * 1;
	
	printf("%s",argv[1]);


	s = argv[2];
	
	n = (*get_op_func(s))(1, 2);

	
	printf("%d\n", n);
	

	return (0);

}
