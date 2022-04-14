#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp: function pointer
 * Return: index or -1 is fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}