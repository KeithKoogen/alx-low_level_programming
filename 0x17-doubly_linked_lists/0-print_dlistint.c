#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dlistint - prints all elements of a doubly linked list
* @h: a pointer to a doubly linked list
* Return: the numer of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	while (h->next != NULL)
	{
		printf(h->n);
		++i;

	}

	return (i);
}
