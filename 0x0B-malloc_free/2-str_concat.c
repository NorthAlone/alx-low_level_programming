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

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[lenS1] != '\0')
		lenS1++;
	while (s2[lenS2] != '\0')
		lenS2++;
	ptr = malloc(sizeof(char) * (lenS1 + lenS2));

	if (ptr != NULL)
	{
		while (i < lenS1)
		{
			*(ptr + i) = s1[i];
			i++;
		}
		while (j <= lenS2)
		{
			*(ptr + i + j) = s2[j];
			j++;
		}
		*(ptr + i + j) = '\0';
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
