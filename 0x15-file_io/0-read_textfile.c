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
	ssize_t valid;
	char *buf;
	size_t i;
	ssize_t count;
	
	count = 0;
	
	buf = malloc(sizeof(char) * letters);
	
	if (buf == NULL || filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);
	
	
	valid = read(fd, buf, letters);
	
	if (valid == -1)
		return (0);
	
	printf("%s", buf);
		
	for (i = 0; i < letters; i++)
	{
		if (buf[i] > 32 &&buf[i] < 127)
			++count;
		
	}
		


	
	

	
	return (count);
}
