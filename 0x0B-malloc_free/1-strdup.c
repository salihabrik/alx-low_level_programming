#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), Null
 **/
char *_strdup(char *str);

{
	char *k;
		unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	k = (char *) malloc(size * sizeof(char));

	if (k == 0)
	{
		return (NULL);
	}

	_strcpy(k, str);
	return (k);
}
