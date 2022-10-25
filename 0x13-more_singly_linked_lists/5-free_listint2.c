#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: the head of a linked list
*/

void free_listint2(listint_t **head)
{
	if (*head->next = NULL)
		return;

	free_listint2(head + 1);
	free(*head);

}
