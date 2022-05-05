#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content of file
 * Return: 1 or NULL or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
