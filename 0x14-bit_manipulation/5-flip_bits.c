#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	unsigned int c = 0;

	while (f)
	{
		c += f & 1;
		f >>= 1;
	}

	return (c);
}

