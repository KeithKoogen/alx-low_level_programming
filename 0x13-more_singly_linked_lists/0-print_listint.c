#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints all the elements of a listint_t list
* @h: a list
* Return: number of items as integer
*/

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count = count + 1;
		h = h->next;
	}

	return (count);
}
