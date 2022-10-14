#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"





void print_int(va_list *ptr)
{

	printf("%d", va_arg(*ptr, int));
}

void print_char(va_list *ptr)
{
	printf("%c", va_arg(*ptr, int));
}

void print_float(va_list *ptr)
{
	printf("%f", va_arg(*ptr, double));
}

void print_string(va_list *ptr)
{
	char *string;
	string = va_arg(*ptr, char *);
	
	printf("%s", string);
}




/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args, *ptr;

	fun ops[] = {
	{'i', print_int},
	{'c', print_char},
	{'f', print_float},
	{'s', print_string},
	};

	va_start(args, format);
	i = 0;
	ptr = &args;
	while (format[i] != '\0')
	{
		
	j = 0;

	while (j < 4)
		{
			if (ops[j].s == format[i])
			{
				ops[j].funct(ptr);
				if (format[i + 1] != '\0')
					printf(", ");
			}

			++j;
		}

		
 
		++i;
		
		

	}
	va_end(args);
	printf("\n");
}
