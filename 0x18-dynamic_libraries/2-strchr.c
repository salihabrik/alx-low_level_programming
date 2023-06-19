#include "main.h"
/**
 *_strchr - finds character match in string
 *@s: pointer variable
 *@c: character to find
 *
 *Return: 0 always
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
