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
	char *string;
	string = va_arg(args, char *);
	
	printf("%s", string);
}




/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	int i, j;

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
				ops[j].funct();
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
