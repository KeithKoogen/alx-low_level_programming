#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the name of the program
* Return: an int
* @argc: the amount of arguments in integer
* @argv: the name of the program and arguments
*/

int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);

	return (0);

}
