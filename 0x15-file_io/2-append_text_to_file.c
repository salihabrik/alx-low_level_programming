#include "main.h"
/**
 *append_text_to_file - appends to the end of file
 *@filename: file to be append to
 *@text_content: a null terminated string to add to end of line
 *does not create file if it already exist
 *if text_content is null, add nothing
 *
 *Return: 1 if file exist, -1 if otherwise or do not have write permission
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, i, count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[count])
			count++;
		i = write(f, text_content, count);
		if (i == -1)
			return (-1);
	}

	close(f);

	return (1);
}

