#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: the head of a linked list
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr, *oldhead;
	
	oldhead = *head;

	while (oldhead->next != NULL)
	{
		ptr = oldhead->next;
		free(oldhead);
		oldhead = ptr;
	}
	*head = NULL;
}
