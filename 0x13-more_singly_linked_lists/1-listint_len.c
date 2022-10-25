#include "lists.h"

/**
* listint_len - counts number of elements
* @h: a linked list
* Return: number of elements as an integer
*/

size_t listint_len(const listint_t *h)
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
