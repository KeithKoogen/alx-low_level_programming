#include <stdarg.h>
#include <stdio.h>

typedef struct funs
{
	char s;
	void (*funct)();

}fun;


void print_int(int n)
{
	
	printf("%d", n);
}

void print_char(int n)
{
	printf("%c", n);
}

void print_float(double n)
{
	printf("%f", n);
}

void print_string(char *s)
{
	printf("%s", s);
}



void (*get_op_func(char s))()
{
	fun ops[] = {
	{'i', print_int},
	{'c', print_char},
	{'f', print_float},
	{'s', print_string},
	};
	int i;

	i = 0;

	while (i < 4)
	{
	if (ops[i].s == 0)
	{
		return (ops[i].funct);
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
	void (*functs)();
	
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		*functs = get_op_func(format[i]);
		functs(va_arg(args));

						 
		++i;
	}
	
	
	va_end(args);
	
	printf("\n");
}
