#include <string.h>
/**
* print_name - prints name
* @name: name as input string
* @f: a function pointer
*/

void print_name(char *name, void (*f)(char *))
{

	f(name);

}
