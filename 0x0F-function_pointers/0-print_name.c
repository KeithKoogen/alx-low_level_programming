
/**
* print_name - prints name
* @name: name as input string
* @f: a function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	(*ptr)(name);

}
