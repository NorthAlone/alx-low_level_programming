#include "main.h"

/**
* void swap_int - entry point
* Description: swaps the values of two integers.
* Return: void
* @a: first value
* @b: second value
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
