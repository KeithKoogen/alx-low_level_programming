#include "main.h"

/**
* append_text_to_file - Appends text to a file
* @filename: the name of the file
* @text_content: text content to be appended
* Return: 1 if success -1 if failure
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	i = 0;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			write(fd, &text_content[i], 1);			
		}

	}

	close(fd);

}
