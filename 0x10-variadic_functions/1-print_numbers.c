#include <stdarg.h>

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
	
	va_start(args, n)
	
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(args, unsigned int), separator);
		}
		
	va_end(args);
}
