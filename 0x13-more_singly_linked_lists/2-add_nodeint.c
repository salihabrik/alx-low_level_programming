#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnd;

	if (head == NULL)
		return (NULL);
	nnd = malloc(sizeof(listint_t));
	if (nnd == NULL)
		return (NULL);
	nnd->n = n;
	nnd->next = *head;
	*head = nnd;
	return (nnd);
}
