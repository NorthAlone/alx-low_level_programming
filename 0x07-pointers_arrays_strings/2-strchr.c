#include "main.h"

/**
 * *_strchr -  locates a character in a string.
 * @s: string in where to search
 * @c: character to find in s
 *
 * Return: pointer ou NULL pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		++s;
	if (*s != '\0' || c == '\0')
		return (str);
	else
		return (NULL);
}
