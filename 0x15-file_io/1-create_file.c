#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: the name of file to create
 *@text_content: a null terminated string to write to file
 *read write permission to file
 * If the file already exists, do not change the permissions
 * truncate if file already exists
 * Return: 1 if successful and -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int f, i, count = 0;

	if (filename == NULL)
		return (-1);


	f = creat(filename, 0600);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;

		i = write(f, text_content, count);
		if (i == -1)
		{
			return (-1);
		}
	}

	return (1);
}


