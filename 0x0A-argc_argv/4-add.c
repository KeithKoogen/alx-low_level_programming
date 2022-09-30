#include "main.h"

/**
* main -  adds positive numbers
* @argv: arguments
* @argc: number of arguments
*/

int main(int argc, char *argv[])
{

	int i, j, x;

	x = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < 48 || argv[i][j] < 57)
				{
					printf("Error");
					return (1);
				}
			}
			x += atoi(argv[i]);
		}
		printf("%d\n", x);
		return (0);
	}

}
