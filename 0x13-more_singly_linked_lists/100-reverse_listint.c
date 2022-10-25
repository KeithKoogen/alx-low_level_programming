#include "lists.h"

void reverse(listint_t *head)
{
	listint_t *ptr;
	
	if (head->next == NULL)
		return;
	ptr = head;
	reverse(head->next);
	ptr->n = head->n;
}

/**
* reverse_listint - reverses a list
* @head: a pointer to the head of the list
* Return: a pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	reverse(*head);
	return (*head);
}
