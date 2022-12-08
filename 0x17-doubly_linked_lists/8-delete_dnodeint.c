#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of linked list
* @head: head of linked list
* @index: index of node to be deleted
* Return: 1 if success -1 if fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old_node, *tmp;
	unsigned int i;

	i = 0;

	old_node = *head;
	if (old_node == NULL)
		return (-1);
	while (old_node != NULL)
	{
		if (index == i)
			break;
		++i;
	}

	if (index == i)
	{
		old_node = tmp;
		old_node->prev = old_node->next;
		old_node->next->prev = old_node->prev;
		free(tmp);
		return (1);

	}
	else
	{
		return (-1);
	}
}
