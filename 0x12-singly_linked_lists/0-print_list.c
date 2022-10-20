#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: a list_t
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		++i;
		
		if (h->len < 10)
		{
			printf("[%d] ", h->len);

		}
		if (h->str != NULL)
		{
			printf("%s",h->str);

		}
		else
		{
			printf("(nil)");
		}

		h = h->next;
	}

	return (i);
}
