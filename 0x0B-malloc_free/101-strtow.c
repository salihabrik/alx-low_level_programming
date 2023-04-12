#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: string to split
 * @ words = count_word(str)
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, f = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[f] = tmp - c;
f++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
matrix[f] = NULL;
return (matrix);
}
