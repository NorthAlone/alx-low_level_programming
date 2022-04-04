#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: NULL or pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, n = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	n = i + 1;

	ptr = (char *)malloc(sizeof(char) * n);

	i = 0;

	if (ptr != NULL)
	{
		while (i < n)
		{
			*(ptr + i) = str[i];
			i++;
		}
		*(ptr + i) = '\0';
	}
	else
	{
		ptr = NULL;
	}
	return (ptr);
}
