#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), Null
 **/
char *_strdup(char *str); 
{
	char *k;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	k = (char *)malloc((sizeof(char) * n) + 1);
	if (k == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		k[i] = str[i];
	 k[n] = '\0';

        return (k);
}
