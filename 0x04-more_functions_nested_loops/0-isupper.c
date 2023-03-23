#include "main.h"
#include <stdio.h>

/**
*  * main - check the code.
*   *
*    * Return: Always 0.
*/
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)

int main(void)
{
	char c;
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
