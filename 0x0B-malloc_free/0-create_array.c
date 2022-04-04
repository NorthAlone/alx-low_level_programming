#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize into array
 * Return: Pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);
	unsigned int i = 0;
	
	if (size == 0)
		return NULL;

	if (ptr != NULL)
	{
		while (i < size)
		{
			*(ptr + i) = c;
			i++;
		}
		*(ptr + i) = '\0';
	}
	else
	{
		return (0);
	}
	return (ptr);
}
