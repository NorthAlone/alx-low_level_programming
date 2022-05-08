#include "main.h"

/**
 * main - entry point
 * copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: value of argument
 * Return 0 success
 */
int main(int argc, char *argv[])
{
	int fdSrc, fdDest, i, j, k;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdSrc = open(argv[1], O_RDONLY);
	if (fdSrc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdDest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fdSrc, buf, BUFSIZ)) > 0)
	{
		if (fdDest < 0 || write(fdDest, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdSrc);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(fdSrc);
	k = close(fdDest);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdSrc);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdDest);
		exit(100);
	}
	return (0);

}
