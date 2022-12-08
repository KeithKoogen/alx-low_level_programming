#include "lists.h"

/**
* insert_dnodeint_at_index - inserts new node at a given position
* @h: a pointer to the head of a linked list
* @idx: the index required
* @n: data to be added to new node a index
* Return: a pointer to new node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *old_node;
	unsigned int i;

	i = 0;

	old_node = *h;
	
	if (old_node == NULL)
		return (NULL);


	while (old_node != NULL)
	{
		if (i == idx)
		{
			break;
		}
		++i;
		old_node = old_node->next;
	}

	if (i == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->prev = old_node->prev;
		old_node->prev->next = new_node;
		new_node->n = n;
		new_node->next = old_node;
		old_node = new_node;
		return (new_node);
	}
	else
	{
		return (NULL);
	}

}
