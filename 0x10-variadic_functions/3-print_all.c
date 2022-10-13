#include <stdarg.h>
#include <stdio.h>

typedef struct funs
{
	char s;
	(*funct)();
} funs;

void print_int()
{
	
	printf("%d", va_arg(args, int));
}

void print_char()
{
	printf("%c", va_arg(args, int));
}

void print_float()
{
	printf("%f", va_arg(args, double));
}

void print_string(char *s)
{
	printf("%s", va_arg(args, char *));
}

(*func)()function_type(char c)
{
	funs fun[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string}
	};
	int i;
	
	i = 0;
	
	while (i < 4)
	{
		if (fun[i].s == c)
		{
			return (fun[i].funct);
		}
		++i;
	}
	
	return (NULL);
}

/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	(*functs)();
	
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		*functs = function_type(format[i]);
		functs();

						 
		++i;
	}
	
	
	va_end(args);
	
	printf("\n");
}
