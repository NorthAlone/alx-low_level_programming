#include "main.h"

/**
 * _strncpy - entry point
 * Description: copy a string
 * @dest: string dest
 * @src: string source
 * @n: number of byte to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
