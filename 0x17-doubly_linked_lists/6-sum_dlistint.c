#include "lists"

/**
* sum_dlistint - adds all data in linked list
* @head: the head of the linked list
* Return: sum of all data as an int
*/

int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
