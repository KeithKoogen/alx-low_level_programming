#include "main.h"

/**
* create_file - creates a file
* @filename: name of file to becreated
* @text_content: content for file
* Return: an int
*/ 

int create_file(const char *filename, char *text_content)
{
	int fd;
	
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREATE | O_WRONLY | O_APPEND, 7000);
	
	if (fd == -1)
		return (-1);
	
	write(fd, text_content, sizeof(text_content));
	
	close(fd);
	
	return (1);
}
