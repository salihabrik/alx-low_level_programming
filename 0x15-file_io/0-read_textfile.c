#include "main.h"
/**
 *read_textfile - reads a text file and prints to POSIX stdout
 *@filename: name to file to read
 *@letters: the number of letter to read and print
 *
 *Return: 0 if file cannot be opened and written to, also if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, i, j;
	char *b;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);

	i = read(f, b, letters);
	if (i == -1)
	{
		free(b);
		return (0);
	}
	b[i] = '\0';

	close(f);

	j = write(STDOUT_FILENO, b, i);
	if (j == -1)
	{
		free(b);
		return (0);
	}

	free(b);
	return (j);

}


