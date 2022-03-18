#include "main.h"

/**
 * more_numbers - entry point
 * Description: print 10 times numbers from 0 to 14
 * Return: void
 **/

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar('1');
		}
		_putchar((i % 10) + 48);
	}
	_putchar('\n');
}
