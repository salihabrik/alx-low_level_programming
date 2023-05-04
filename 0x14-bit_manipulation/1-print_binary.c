#include "main.h"

/**
 *print_binary - prints a number binary string
 *
 *@n: the number to print
 *
 *
 *return: void
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, p = 0;

	while (b)
	{
		if (n & 1 << --b)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}

