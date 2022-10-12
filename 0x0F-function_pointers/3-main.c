#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* main - performs different ops on numbers based on input
* @argc: number of arguments
* @argv: array of arguments
* Return: void
*/

int main(int argc, char *argv[])
{
	int a, b, i, (*n)(int, int);
	char *s;

	if (argc == 4)
	{
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	s = argv[2];
	n = get_op_func(s);
	
	if (n == NULL)
	{
		printf("Error\n");
		exit(99);
	}
		
		if ((strcmp(s, "/") || strcmp(s, "%")) && (b == 0))
		{
			printf("Error\n");
			exit(100);
		}

		i = (*n)(a, b);

		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
