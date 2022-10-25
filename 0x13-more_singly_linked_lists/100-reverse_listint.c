#include "lists.h"

int reverse(listint_t *head)
{
	if (head->next == NULL)
		return (head->n);
	
	head->n = reverse(head->next);
	
}

/**
* reverse_listint - reverses a list
* @head: a pointer to the head of the list
* Return: a pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	reverse(*head);
}
