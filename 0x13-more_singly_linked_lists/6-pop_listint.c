#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: the head of the list
* Return: the values stored in the head
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr, *tmp;

	if (*head == NULL)
		return (0);

	ptr = *head;
	i = 0;
	i = ptr->n;
	tmp = ptr->next;

	free(*head);
	*head = tmp;

	return (i);
}
