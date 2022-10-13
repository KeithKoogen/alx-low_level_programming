#include <stdarg.h>
#include <stdio.h>

void 

/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		printf("%c", format);
		++i;
	}
	
	
	va_end(args);
	
	
}
