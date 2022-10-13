#include <stdarg.h>
#include <stdio.h>

typedef struct funs
{
	char s;
	void (*funct)();
	char *type;

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
	{'i', print_int, "int"},
	{'c', print_char, "int"},
	{'f', print_float, "double"},
	{'s', print_string, "char *"},
	};
	int i;

	i = 0;

	while (i < 4)
	{
	if (ops[i].s == s)
	{
		return (ops[i].funct);
	}

	++i;
	}

	return (NULL);
}

char * return_type(char s)
{
	fun ops[] = {
	{'i', print_int, "int"},
	{'c', print_char, "int"},
	{'f', print_float, "double"},
	{'s', print_string, "char *"},
	};
	int i;

	i = 0;

	while (i < 4)
	{
	if (ops[i].s == s)
	{
		return (ops[i].type);
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
		functs = get_op_func(format[i]);
		
		functs(va_arg(args, format[i]));

						 
		++i;
	}
	
	
	va_end(args);
	
	printf("\n");
}
