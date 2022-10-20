#include "lists.h"

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head);
}
