#include "lists.h"

/**
* add_nodeint_end - adds node at end of linked list
* @head: pointer to the head of linked list
* @n: an integer
* Return: a pointer to the linked list
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->next = NULL;
	new_node->n = n;

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);

}
