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
	size_t count;
	ssize_t valid;
	char *buf;
	
	buff = malloc(sizeof(char) * letters);
	
	if (buff == NULL)
		return (0);
	
	count = 0;
	
	if (filename == NULL)
		return(0);
	
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);
	
	
	valid = read(fd, buf, letters);
	
	if (valid == -1)
		return (0);
	
	printf("%s", buf);
		


	
	

	
	return (letters);
}
