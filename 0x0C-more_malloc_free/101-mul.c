#include "main.h"

/**
* numsonly - checks if a string contains only digits only
* @str: a string
* Return: an integer
*/

int numsonly(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
	if (str[i] < 48 && str[i] > 57)
	return (1);
	}

	return (0);
}

/**
* main - multiplies two positive numbers
* @argv: arguments in array
* @argc: number of arguments
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

	if (numsonly(argv[1]) == 1 || numsonly(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	k = atoi(argv[2]);

	ptr = malloc(i * k);

	*ptr = i * k;

	printf("%d\n", *ptr);
	free(ptr);

	return (0);

}
