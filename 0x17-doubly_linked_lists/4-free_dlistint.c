#include "lists.h"

/**
* free_dlistint - frees a linked list
* @head: the head of the linked list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
  if (head-> next == NULL)
    free(head);
  free_dlistint(head->next);
}
