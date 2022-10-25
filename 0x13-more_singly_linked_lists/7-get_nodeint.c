#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: the head of the linked list
* @index: the index number of the node requested
* Return: a pointer to the node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);

	if (head == NULL)
		return (NULL);

	return (get_nodeint_at_index(head->next, index - 1));
}
