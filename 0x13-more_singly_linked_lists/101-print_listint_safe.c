#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *mp = NULL;
	const listint_t *bn = NULL;
	size_t countr = 0;
	size_t new_n;

	mp = head;
	while (mp)
	{
		printf("[%p] %d\n", (void *)mp, mp->n);
		countr++;
		mp = mp->next;
		bn = head;
		new_n = 0;
		while (new_n < countr)
		{
			if (mp == bn)
			{
				printf("-> [%p] %d\n", (void *)mp, mp->n);
				return (countr);
			}
			bn = bn->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (countr);
}
