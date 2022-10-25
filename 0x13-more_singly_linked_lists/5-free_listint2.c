#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: the head of a linked list
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head->next != NULL)
	{
		ptr = *head->next;
		free(*head);
		*head = ptr;
	}
	
	head = NULL;
}
