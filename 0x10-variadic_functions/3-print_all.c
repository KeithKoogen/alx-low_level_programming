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
	while (format != '\0')
	{
		*format == 'c' ? printf("%c", va_arg(args, char);
		
		++format;
	}
	
	
	va_end(args);
	
	
}
