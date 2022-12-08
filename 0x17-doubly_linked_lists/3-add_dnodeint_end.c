#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at end of list
* @head: head of the linked list
* @n: value of element to add
* Return: a pointer to the new element of NULL if failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	old_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	
	if (old_node == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		while (old_node != NULL)
			old_node = old_node->next;
		
		old_node->next = new_node;
		new_node->prev = old_node;
	}
	return (new_node);
}
