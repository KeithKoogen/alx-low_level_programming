#include <stdarg.h>

/**
* sum_them_all - adds all parameters
* @n: unsigned int
* Return: A integer sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;
	
	va_start(args, n);
	
	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	
	
	va_end(args);
	
	return (sum);
}
