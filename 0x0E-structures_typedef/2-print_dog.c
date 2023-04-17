#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", k->name);

		printf("Age: %f\n", k->age);

		if (!(k->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", k->owner);
	}
}
