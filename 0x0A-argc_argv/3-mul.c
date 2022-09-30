#include "main.h"

/**
* main - multiplies two numbers
* @argv: arguments
* @argc: number of arguments
* Return: integer 0
*/

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", argv[1] + argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);

}
