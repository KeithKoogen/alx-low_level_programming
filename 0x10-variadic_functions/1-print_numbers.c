#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator:  string to be printed between numbers
* @n: number of integers passed to the function
* Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, unsigned int));
			if (i < (n - 1))
				printf("%s", separator);
		}

	va_end(args);
	printf("\n");
}
