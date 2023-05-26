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
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
