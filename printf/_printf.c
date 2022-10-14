#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include "_putchar.c"

void print_char(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, int);
 _putchar(i);
}

void print_string(va_list *ptr)
{
  char *str;
  int i;
  
  str = va_arg(*ptr, char *);
	
  while (str[i] != '\0')
  	_putchar(str[i]);
}

int _printf(const char *format, ...)
{
  function functions[] = {
    {'c', print_char},
    {'s', print_string}
  };
	int i;
  
  va_list args, *ptr;
  
	va_start(args, format);
	while (*format != '\0')
	{
		i = 0;
		while (i < 2)
		{
			if (*format == '%')
				if (functions[i].symbol == *(format + 1))
					functions[i].function(ptr);
			++i;
		}
		++format;
	}
		
	va_end(args);
  

}


int main(void)
{
    _printf("sss");
    return (0);
}
