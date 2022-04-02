#include "main.h"

/**
 * _memcpy - that copies memory area.
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of byte to be copy on src
 *
 * Return: adress that dest pointer to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
