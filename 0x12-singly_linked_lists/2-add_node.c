#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is n
 */
int _strlen(const char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *d;

	d = malloc(sizeof(list_t));
	if (d == NULL)
		return (NULL);
	d->str = strdup(str);

	d->len = _strlen(str);
	d->next = *head;
	*head = d;

	return (d);
}
