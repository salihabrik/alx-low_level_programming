#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of s
 *
 * @accept: which consist only of bytes from accept
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept)
	{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
		}
		if (accept[j] == '\0')
		{
		break;	
		}
	}
		return count;
	}
}

