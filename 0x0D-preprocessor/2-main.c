#include <stdlib.h>
#include <stdio.h>

/**
* main - prints name of current file
* Return: void
*/

int main(void)
{
	char *filename;
	
	filename = _FILE_;
	printf("%s\n", filename);
	
	return (0);
}
