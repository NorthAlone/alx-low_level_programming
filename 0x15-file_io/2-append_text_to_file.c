#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 or -1 is fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY)
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		j = write(fd, text_content, i);
		if (i != j)
			return (-1);
	}
	close(fd);
	return (1);
}
