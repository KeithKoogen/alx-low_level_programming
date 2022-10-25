#include "lists.h"

/**
* sum_listint - adds all integers in list
* @head: the head of the list
* Return: the sum off all data(n)
*/

int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		return (head->n + sum_listint(head->next));
	}
	else
	{
		return (0);
	}
		

}
