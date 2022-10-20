#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: a list_t
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;
	int j;

	i = 0;

	while (h != NULL)
	{
		++i;
		
		if (h->len < 10)
		{
			_putchar('[');
			_putchar((h->len) + 48);
			_putchar(']');
		}
		if (h->str != NULL)
		{
			j = 0;
			while (h->str[j] != '\0')
			{
				_putchar(h->str[j]);
			}
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}

		h = h->next;
	}

	return (i);
}
