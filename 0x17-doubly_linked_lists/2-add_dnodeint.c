#include "lists.h"

/**
* add_dnodeint - adds a new node at start of linked list
* @head: a pointer to a pointer of a linked list
* @n: element to be added
* Return: a pointer to a linked list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *old_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	old_node = *head;

	new_node->n = n;
	new_node->next = old_node;
	new_node->prev = NULL;

	old_node->prev = new_node;

	return new_node;

}
