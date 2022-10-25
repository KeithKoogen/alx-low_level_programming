#include "lists.h"

void reverse(listint_t *head, *tmp)
{
	listint_t *ptr;

	if (head->next == NULL)
		return;

	reverse(head->next, tmp);
	tmp = head;
	tmp = tmp->next;
}

/**
* reverse_listint - reverses a list
* @head: a pointer to the head of the list
* Return: a pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	
	tmp = *head;
	
	reverse(*head, tmp);
	return (*head);
}
