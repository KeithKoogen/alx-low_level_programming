#include "main.h"

/*
read_textfile - Reads and prints a text file
@filename: name of the file
@letters: number of letters to read an print
Return: Actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char buf[1];
	
	buf[0] = 0;
	count = 0;
	
	if (filename == NULL)
		return(0);
	
	fd = open(filename, O_RDONLY);
	
	if (fd== -1)
		return (0);
	
	while (buf != '\0')
	{
		read(fd, buf, 1);
		_putchar(buf[0]);
		++count;
		
		if (count == letters)
			break;

	}
	
	return (count);
}
