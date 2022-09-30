#include "main.h"

/**
* main - prints all arguments it receives
* @argv: arguments
* @argc: number of arguments
* Return: integer 
*/

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
}
