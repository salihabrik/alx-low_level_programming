#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The char to be checked.
 *
 * Return: 1 if char is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
