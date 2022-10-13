#include <stdarg.h>
#include <stdio.h>



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
		printf("%s", format);
		++i;
	}
	
	
	va_end(args);
	
	
}
