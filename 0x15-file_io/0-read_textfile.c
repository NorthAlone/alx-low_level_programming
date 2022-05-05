#include "main.h"

/**
 * read_textfile - read a text file and
 * prints it to stdout
 * @filename: file to read
 * @letters: number of letters to read
 * Return: number of letter or 0 or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int nbLetRead, wrt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	nbLetRead = read(fd, buf, letters);
	if (nbLetRead < 0)
	{
		free(buf);
		return (0);
	}
	buf[nbLetRead] = '\0';

	close(fd);

	wrt = write(STDOUT_FILENO, buf, nbLetRead);
	if (wrt < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wrt);
}
