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

	ptr = *head;

	while (ptr != NULL)
		ptr = ptr->next;

	new_node->n = n;
	new_node->next = NULL;
	ptr = new_node;

	return (ptr);

}
