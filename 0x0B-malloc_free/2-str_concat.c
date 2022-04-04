#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lenS1 = 0, lenS2 = 0, i = 0, j = 0;
	char *ptr;

	while (s1 && s1[lenS1])
		lenS1++;
	while (s2 && s2[lenS2])
		lenS2++;

	ptr = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1)
	{
		while (i < lenS1)
		*(ptr + i) = *(s1 + i);
		i++;
	}

	if (s2)
	{
		while (j < lenS2)
		{
			*(ptr + (i + j)) = *(s2 + j);
			j++;
		}
	}
	*(ptr + (i + j)) = '\0';
	return (ptr);
}
