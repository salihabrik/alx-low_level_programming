#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of the list
 *@head: pointer to head
 *@n: number variable
 *
 *Return: the address of the new element, NUll if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);

}
