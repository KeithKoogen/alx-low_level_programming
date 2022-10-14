#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include "_putchar.c"

void print_numbers(int n)
{
	if (n < 10)
	{
		return;
	}
	print_numbers(n/10);
	_putchar((n % 10) + 48);
    
}

void print_char(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, int);
 _putchar(i);
}

void print_integer(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, int);
	if (i > 9)
	{
		
	}
	else if (i < 0)
	{
		_putchar('-')
	}
	else
	{
		_putchar(i + 48);
	}
 
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
    {'s', print_string},
    {'i', print_integer}
  };
	int i;
  
  va_list args, *ptr;
	
	ptr = &args;
  
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else
		{
		i = 0;
		while (i < 3)
		{
			
				if (functions[i].symbol == *(format + 1))
				{
					functions[i].function(ptr);
					++format;
				}
					
					
			++i;
		}
		}
		++format;
	}
		
	va_end(args);
  

}


int main(void)
{
    _printf("%i", 55);
    return (0);
}
