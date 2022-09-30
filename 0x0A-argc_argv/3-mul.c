#include "main.h"

/**
* main - multiplies two numbers
* @argv: arguments
* @argc: number of arguments
* Return: integer 0
*/

int main(int argc, char *argv[])
{
	int x, y;
	
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", x + y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
