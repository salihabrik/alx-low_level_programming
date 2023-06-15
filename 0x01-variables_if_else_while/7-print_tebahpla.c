#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: this is the main function
 * Dvariablel n each time it is executed.
 * its stord in n is pos
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char chr = 'z';
while (chr >= 'a')
{
putchar(chr);
chr--;
}
putchar('\n');
return (0);
}
