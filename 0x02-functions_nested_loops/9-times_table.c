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

			if (j < 9)
				_putchar(',');

			if (j <= 8)
			{
				if (((j + 1) * i) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}

			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
