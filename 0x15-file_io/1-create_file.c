#include "main.h"

/**
* create_file - creates a file
* @filename: name of file to becreated
* @text_content: content for file
* Return: an int
*/

int create_file(const char *filename, char *text_content)
{
	int fd, check, i;

	check = 0;
	i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
		check = write(fd, &text_content[i], 1);
		if (check == -1)
			return (-1);

		++i;
		}
	}

	close(fd);

	return (1);
}
