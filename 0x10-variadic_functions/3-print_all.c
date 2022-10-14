#include <stdarg.h>
#include <stdio.h>

typedef struct funs
{
	char s;
	void (*funct)();

}fun;

va_list args;

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

void print_string()
{
	printf("%s", va_arg(args, char *));
}




/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	int i, j;
	void (*functs)();
	fun ops[] = {
	{'i', print_int},
	{'c', print_char},
	{'f', print_float},
	{'s', print_string},
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
				functs();
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
