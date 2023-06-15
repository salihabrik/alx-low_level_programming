#include "lists.h"
/**
 *print_dlistint - count
 *@h: head pointer
 *
<<<<<<< HEAD
 *Return: the number pf elements
=======
 *Return: number of elem
>>>>>>> 56278ef42a4fbac4729febcf30096b6b475d7242
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
<<<<<<< HEAD
}
=======
}
>>>>>>> 56278ef42a4fbac4729febcf30096b6b475d7242
