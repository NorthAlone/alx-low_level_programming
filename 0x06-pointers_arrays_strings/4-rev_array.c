#include "main.h"

/**
 * reverse_array - entry point
 * Description: reverses the content of an array of integers.
 * @a: int pointer
 * @n: number of element of array
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int temp[1000], i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - 1 - i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
