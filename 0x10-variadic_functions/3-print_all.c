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
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		
		if (format[i] == 's')
			printf("%s", va_arg(args, char *));
		
						 
		++i;
	}
	
	
	va_end(args);
	
	
}
