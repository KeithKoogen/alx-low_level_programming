#include <stdarg.h>
#include <stdio.h>

typedef struct funs
{
	char s;
	void (*funct)();
	type type;

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




/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	void (*functs)();
	fun ops[] = {
	{'i', print_int, "int"},
	{'c', print_char, "int"},
	{'f', print_float, "double"},
	{'s', print_string, "char *"},
	};

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		
	j = 0;

	while (j < 4)
		{
			if (ops[j].s == format[i])
			{
				functs = ops[j].funct;
				functs(va_arg(args, ops[j].type));
			}

			++j;
		}

		
 
		++i;
		
		
		if (format[i + 1] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
