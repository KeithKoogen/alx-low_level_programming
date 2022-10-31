#include "main.h"

/**
* create_file - creates a file
* @filename: name of file to becreated
* @text_content: content for file
* Return: an int
*/ 

int create_file(const char *filename, char *text_content)
{
	int fd, check;
	
	check = 0;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	
	
	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		check = write(fd, text_content, sizeof(text_content));
		if (check == -1)
			return (-1);
	}
	
	close(fd);
	
	return (1);
}
