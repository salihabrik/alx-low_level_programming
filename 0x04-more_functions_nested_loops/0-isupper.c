#include "main.h"

/**
 *  _isupper - check if c is upper
 *
 * @c: character to check
 *
 * Return: 1 if its uppercase, 0 if not
*/
int _isupper(int c)

{
	char c;
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
