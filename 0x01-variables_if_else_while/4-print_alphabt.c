#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: this is the main funchtion
 * Dvariablel n each time it is executed.
 * its stord in n is pos
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char chr = 'a';
while (chr <= 'z')
{
if (chr == 'e')
{
chr++;
continue;
}
if (chr == 'q')
{
chr++;
continue;
}
putchar(chr);
chr++;
}
putchar('\n');
return (0);

