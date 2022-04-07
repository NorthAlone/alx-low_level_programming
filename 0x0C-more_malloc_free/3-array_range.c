#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 *
 * Return: pointer or NULL
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size = 0, i;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);

}
