#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *
 *@b:b is pointing to a string of 0 and 1 chars
 *
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int	uint_val = 0, n = 0;

	if (!b)
		return (0);
	while (b[n])
	{
		if (b[n] > '1' || b[n] < '0')
			return (0);
		uint_val <<= 1;
		uint_val |= b[n] - '0';
		n++;
	}
	return (uint_val);
}
