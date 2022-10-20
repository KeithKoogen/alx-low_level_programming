#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node
* @head: pointer to head of linked list
* @str: a string
* Return: a pointer to thenew node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	new = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return (NULL);
	}
	
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	new->len = strlen(str);
	
	return (*head);
	
}
