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
	char buffer[1024];
	
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	
	file_from = open(argv[1], O_RDONLY);
	
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	
	while (check != 0)
	{
		check = read(file_from, buffer, sizeof(buffer));
		dprintf(file_to,"%s", buffer);
	}
	
	return (0);
}
