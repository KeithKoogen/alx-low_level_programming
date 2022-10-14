#ifndef VAR_FUNCS
#define VAR_FUNCS

typedef struct funs
{
	char s;
	void (*funct)();
}fun;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
