#include "lists.h"

listint_t *reverse(listint_t *head, listint_t *tmp)
{
	if (head->next == NULL)
		return(head);

	tmp = reverse(head->next, tmp);
	
	return (tmp);

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
