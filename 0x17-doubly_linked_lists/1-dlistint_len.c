#include "lists.h"

/**
 *dlistint_len - prints the length of the list
 *@h: pointer to list
 *
 *Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
