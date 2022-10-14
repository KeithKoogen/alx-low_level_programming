#include "main.h"
#include <stdarg.h>
#include <stdio.h>

print_char(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, char);
 _putchar(i);
}

print_string(va_list *ptr)
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
  
  va_list args, *ptr;
  
  

}
