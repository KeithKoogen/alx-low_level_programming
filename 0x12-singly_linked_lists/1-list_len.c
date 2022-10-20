#include "lists.h"

/**
* list_len - finds length of linked list
* @h: a pointer to linked llst
* Return: total elements in list
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}

	return (count);
}
