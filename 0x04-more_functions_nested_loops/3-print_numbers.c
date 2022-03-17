#include "main.h"

/**
 * print_numbers - entry point
 * Description: print numbers from 0 to 9
 * Return: void
 **/

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar((i % 10) + 48);
	}
	_putchar('\n);
}
