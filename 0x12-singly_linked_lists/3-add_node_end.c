#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a node at end of linked list
* @head: head of linke list
* @str: a string
* Return: address of new element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	ptr = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
