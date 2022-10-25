#include "lists.h"


/**
* delete_nodeint_at_index - deletes a node at index
* @index: node to delete
* @head: pointer to head of the linked list
* Return: 1 if success -1 if failure
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *ptr, *tmp2;

	ptr = *head;
	
	if (ptr == NULL)
		return (-1);

	i = 0;
	
	if (index == 0)
	{
		tmp = ptr->next;
		free(ptr);
		*head = tmp;
		
	}

	while (i < index)
	{
		ptr = ptr->next;
		++i;
		
		if (ptr == NULL)
			return (-1);
	}
	

	tmp = ptr->next;
	tmp2 = tmp->next;
	ptr->next = tmp2;

	free(tmp);

	return(1);
}
