#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return:0
 */
void _puts(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
