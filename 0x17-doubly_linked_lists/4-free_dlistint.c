#include "lists.h"

/**
 *free_dlistint - frees a double linked list
 *@head: pointer to head
 *
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}


}
