#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t e = 0;
	int f;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			e++;
		}
		else
		{
			free(*h);
			*h = NULL;
			e++;
			break;
		}
	}

	*h = NULL;

	return (e);
}
