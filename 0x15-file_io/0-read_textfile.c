#include "main.h"

/*
* read_textfile - Reads and prints a text file
* @filename: name of the file
* @letters: number of letters to read an print
* Return: Actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check;
	ssize_t valid;
	char buf[1];
	size_t i;
	ssize_t count;

	count = 0;

	buf[0] = 0;

	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	for (i = 0; i < letters; i++)
	{
		valid = read(fd, buf, sizeof(char));
		if (valid == 0)
			break;

		if (valid == -1)
			break;

		check = write(1, &buf[0], 1);

		if (check == -1)
			return (0);

		if (buf[0] == '\0')
			break;

		if ((buf[0] > 31 && buf[0] < 127) || buf[0] == '\n')
			++count;

	}


	return (count);
}
