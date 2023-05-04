#include "main.h"

/**
 * function that converts a binary number to an unsigned int
 *
 *@b:b is pointing to a string of 0 and 1 chars
 *
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int uint_val = 0;
	int n = 0;

	if (b == NULL)
		return 0;
	

	while (b[n] != '\0')
	{
		if (b[n] == '0')
		{
		uint_val = uint_val << 1;
		}
		else if (b[n] == '1')
		{
			uint_val = (uint_val << 1) | 1;
		} 
		else
			return 0;
		}
		n++
		
	return uint_val;
}

