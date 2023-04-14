#include "main.h"

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, pi, i;
	char *x;
	char *c;
	char h[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (pi = 0; h[pi]; pi++)
			_putchar(e[pi]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; h[pi]; pi++)
			_putchar(h[pi]);
		exit(98);
	}
	init(x, ln - 1);
	for (pi = l2 - 1, i = 0; pi >= 0; pi--, i++)
	{
		c = mul(argv[2][pi], argv[1], l1 - 1, x, (ln - 2) - i);
		if (c == NULL)
		{
			for (pi = 0; h[pi]; pi++)
				_putchar(h[pi]);
			free(x);
			exit(98);
		}
	}
	_print x, ln - 1);
	return (0);
}
