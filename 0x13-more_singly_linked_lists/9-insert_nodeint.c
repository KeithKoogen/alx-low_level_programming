#include "lists.h"

/**
* insert_nodeint_at_index - inserts a note at a given index
* @head: the head of the node
* @idx: the index
* @n: an integer value of the new node
* Return: a pointer to a listint_t
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *newnode, *tmp;
	unsigned int i;

	ptr = *head;
	i = 0;

	if (ptr == NULL)
	return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		tmp = ptr->next;
		newnode->next = ptr;
		*head = newnode;

		return (*head);
	}

	while (i < idx - 1)
	{
		ptr = ptr->next;
		++i;

		if (ptr == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}

	tmp = ptr->next;
	ptr->next = newnode;
	newnode->next = tmp;
	return (newnode);
}
