#include "main.h"

/**
* numsonly - checks if a string contains only digits only
* @str: a string
* Return: a boolean
*/

bool numsonly(char *str);
{
	int i;
	
	i = 0;
	
	while (str[i] != '\0')
	{
	if (str[i] < 48 && str[i] > 57) 
	return (false);
	}
	
	return (true);
}


/**
* main - multiplies two positive numbers
* @num1: integer one
* @num2: integer two
* Return: void
*/

int main(int argc, char *argv[])
{
	int *ptr;
	int i, k;
	
		if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (numsonly(argv[1]) != true || numsonly(argv[2]) != true)
	{
		printf("Error\n");
		exit(98);
	}
	
	i = atoi(argv[1]);
	k = atoi(argv[2]);
	
	ptr = malloc(i * k);
	
	*ptr = i * k;
	
	printf("%d\n", *ptr);
	
	return (0);


}
