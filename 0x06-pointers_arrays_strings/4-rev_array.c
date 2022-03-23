#include "main.h"

/**
* reverse_array - main entry
* Description: reverse the content of an array
* Return: void
* @a: pointer to int array
* @n: number of array element
*/
void reverse_array(int *a, int n)
{
	int temp[1000], i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}

	for (i = 0; i <= n; i++)
	{
		a[i] = temp[(n - 1) - i];
	}
}
