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
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);

	if (file_from < 0)
	{
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	check = read(file_from, buffer, sizeof(buffer));
	if (check < 0)
	{
		close(file_to);
		close(file_from);
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	dprintf(file_to,"%s", buffer);

	close(file_to);
	close(file_from);
	return (0);
}
