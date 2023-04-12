#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - creating an array contans another str
 * @s1: second str
 * @s2: first str
 *
 * Return: allocated str that contains both.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = s1 ? strlen(s1) : 0;
	unsigned int len2 = s2 ? strlen(s2) : 0;
	char *result = malloc(len1 + len2 + 1);
	unsigned int i;

	if (!result)
	{
		return (NULL);
	}
	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			result[i] = s1[i];
		}
	}
	if (s2)
	{
		for (i = 0; i < len2; i++)
		{
			result[len1 + i] = s2[i];
		}
	}
	result[len1 + len2] = '\0';
	return (result);
}
