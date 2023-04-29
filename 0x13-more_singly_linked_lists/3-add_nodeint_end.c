#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @n: int to be added to the new node.
 * Return: The address of the new element,
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnd = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (nnd == NULL)
		return (NULL);

	nnd->n = n;
	nnd->next = NULL;

	if (*head == NULL)
	{
	*head = nnd;
		return (nnd);
	}

	while (temp->next != NULL)
	temp = temp->next;

	temp->next = nnd;

		return (nnd);
}

