#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
* Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list args;

  va_start(args, n);

  for (i = 0; i < n; i++)
  {
		if (va_arg(args, char *) != NULL)
		{
			printf("%s", va_arg(args, char *));
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
  }

  va_end(args);
	printf("\n");
}
