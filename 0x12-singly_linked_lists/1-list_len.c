#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (n != NULL)
	{
		++count;
		n = n->next;
	}

	return (count);
}
