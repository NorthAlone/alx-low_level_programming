#include <stdio.h>
#include "main.h"

/**
 * times_table - entry point
 * Description: prints the 9 times table, starting with 0.
 * Return: void
 **/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j >= 10)
			{
				_putchar(((i * j) / 10) + 48);
			}
			_putchar(((i * j) % 10) + 48);

			if (i * j < 81)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
