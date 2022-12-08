#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node
* @head: the head of the linked list
* @index: the index of the node
* Return: a pointer to a node at index or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		++i;
		head = head->next;
	}

	return (NULL);
}
