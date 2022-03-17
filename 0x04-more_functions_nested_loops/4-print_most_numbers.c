#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: print numbers from 0 to 9 not 2 and 4
 * Return: void
 **/

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4) 
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
