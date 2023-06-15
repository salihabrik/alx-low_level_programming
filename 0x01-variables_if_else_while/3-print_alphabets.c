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
char u_chr = 'A';
char chr = 'a';
while (chr <= 'z')
{
putchar(chr);
chr++;
}
while (u_chr <= 'Z')
{
putchar(u_chr);
u_chr++;
}
putchar('\n');
return (0);
}
