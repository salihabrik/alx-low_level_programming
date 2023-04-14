#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int c = 0;
while (s[c])
{
if (s[c] < '0' || s[c] > '9')
return (0);
c++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int v = 0;
while (s[v] != '\0')
{
v++;
}
return (v);
}
/**
 * errors - handles errors for main
 *
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
isNumbers = is_number(argv[1]) +  is_number(argv[1]);
if (isNumbers != 2)
{
	printf("Error\n");
	exit(98);
	}
larger = larger_num(argv[1], argv[2]);

if (larger == 1)
	total = mul_number(argv[1], argv[2]);
else
	total = mul_number(argv[2], argv[1]);

printf("%lu\n", (atol(argv[1]) * atol(argv[2])));
return (0);
}
