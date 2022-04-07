#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element of the array
 * @size: size of an element;
 * Return: Pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = NULL;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
