#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: value in memory to be filled
 * @b: char to use to fill
 * @n: number of byte to fill
 *
 * Return: adress that s pointer to
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
