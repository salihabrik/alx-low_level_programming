#include "lists.h"
/**
 *print_dlistint - counts the number 
 *@h: head pointer
 *
 *Return: number of elem
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
