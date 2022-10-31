#include "main.h"

/**
* main - copies from one file to another
* @argc: number of arguments
* @argv: arguments array
* Return: an integer
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, check, check2;
	char *buffer;
	
	buffer = calloc(1024, 1);

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_from < 0)
	{
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	
	while (check != 0)
	{

	check = read(file_from, buffer, sizeof(buffer));
	if (check < 0)
	{
		close(file_to);
		close(file_from);
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
		

	check2 = write(file_to, buffer, sizeof(buffer));
	if (check2 < 0)
	{
		close(file_to);
		close(file_from);
		fprintf(stderr, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
		if (check < 1024)
			break;
	}
	free(buffer);

	close(file_to);
	close(file_from);
	return (0);
}
