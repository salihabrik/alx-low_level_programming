#include "main.h"

/**
 *-puts - prints a string, in reverse, followed by a new line
 *@s : pointer to the string to print
 * Return: Always 0.
 */
void print_rev(char *s);
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
