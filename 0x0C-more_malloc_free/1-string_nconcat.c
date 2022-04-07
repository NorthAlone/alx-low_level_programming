#include "main.h"

/**
 * string_nconcat - that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte to take in s2
 *
 * Return: Pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *ptr = NULL;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (n >= len2)
		n = len2;
	else if (n < len2)
		len2 = n;
	if (s1)
	{
		while (i < len1)
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < n)
		{
			ptr[i + j] = s2[j];
			j++;
		}
	}
	ptr[i + j] = '\0';
	return (ptr);
}
