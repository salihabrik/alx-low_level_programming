/**
 * main - Entry point
 *
 * Description: A C program that use printf.
 *
 * Return: Always 0 (Success)
*/
#include <unistd.h>
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
