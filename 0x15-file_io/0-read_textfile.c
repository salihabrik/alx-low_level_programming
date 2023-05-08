#include "main.h"
#include <fcntl.h>
/**
 * Write a function 
 * reads a text file
 * prints it to the POSIX standard output.
 *@letters : l
 *@filname : b
 *
 *returns the actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t l;
	char * b;

	if (filename == NULL )
	{
		return (0);
	}
	f = open (filename ,O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * (letters + 1));
	if (b == NULL)
		return (0);
	l = read(fd, buffer, letters);
	if (l == -1)
	{
		free (b);
		close (f);
		return (0);
	}
	printf (%s , b);
	free (b);
	close (f);
	return (l):
}

