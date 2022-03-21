#include "main.h"

/**
* reset_to_98 - entry point
* Description: the value it points to to 98.
* Return: void
* @n: pointer that point to variable n
*/

void reset_to_98(int *n)
{
	int pointer_n = &n;

	*pointer_n = 98;
}
