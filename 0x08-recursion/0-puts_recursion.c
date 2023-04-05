#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be printed
 * return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

