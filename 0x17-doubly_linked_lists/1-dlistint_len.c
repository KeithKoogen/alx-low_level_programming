#include "lists.h"

/**
* dlistint_len - returns numbere of elements in doubly linke list
* @h: a doubly linked list
* Return: number of elememts
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}

	return (i);
}
