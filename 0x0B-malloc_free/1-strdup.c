#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *@str: the source string
 * Return: returns a pointer to the duplicated string.
 * Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *c;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	c = (char *)malloc((sizeof(char) * len) + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		c[i] = str[i];
	c[len] = '\0';

	return (c);
}
