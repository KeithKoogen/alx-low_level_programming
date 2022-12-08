#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print_dlistint - prints all elements of a doubly linked list
* @h: a pointer to a doubly linked list
* Return: the numer of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h->next != NULL)
	{
		printf("%d", h->n);
		++i;
		h = h->next;

	}

	return (i);
}
