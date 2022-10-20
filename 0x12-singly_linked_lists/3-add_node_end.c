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
	
	new = malloc(sizeof(list_t));
	
	if (new == NULL)
		return (NULL);
	
	while (head !=NULL)
	{
		if (head->->next == NULL)
		{
			head->->next = new;
			new->next = NULL;
			new->str = strdup(str);
			new->len = strlen(str);
			return (new);
			
		}
		*head = *head->next;
	}
	return (NULL);
}
