#include "main.h"
#include <stdarg.h>
#include <stdio.h>



int _printf(const char *format, ...)
{
  function functions[] = {
    {'c', print_char},
    {'s', print_string}
  };
  
  va_list args, *ptr;
  
  

}
