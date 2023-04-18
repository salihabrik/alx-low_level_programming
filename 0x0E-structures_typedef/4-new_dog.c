#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - write a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name, *owner;
	int l1, l2, i;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);
	for (l1 = 0; name[l1]; l1++)
		;
	for (l2 = 0; owner[l2]; l2++)
		;
	l1++;
	l2++;
	name = malloc(l1);
	if (!name)
	{
		free(ptr);
		return (NULL);
	}
	owner = malloc(l2);
	if (!owner)
	{
		free(name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		name[i] = name[i];
	for (i = 0; i < l2; i++)
		owner[i] = owner[i];

	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;

	return (ptr);
}
