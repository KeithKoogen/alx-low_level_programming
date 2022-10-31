#include "main.h"

/**
* main - copies from one file to another
* @argc: number of arguments
* @argv: arguments array
* Return: an integer
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, check;
	char buffer;
	
	file_from = open(argv[1], O_RDONLY);
	
	file_to = open(argv[2], O_WRONLY | CREAT | TRUNC);
	
	while (check != 0)
	{
		check = read(file_from, buffer);
		dprintf(file_to, buffer);
	}
	
	return (0);
}
