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

	a = 0;
	b = 0;
	i = 0;

	if (argc == 4 && strlen(argv[2]) == 1)
	{
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	s = argv[2];
		if (s == "+" || s == "-" || s == "*" || s == "/" || s == "%")
		{
			n = get_op_func(s);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	if (n == NULL)
	{
		printf("Error\n");
		return (1);
	}

		i = (*n)(a, b);

		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}


	return (0);

}
