#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 * Description: prints every minute of the day of Jack Bauer
 * Return: void
 **/
void jack_bauer(void)
{
	int h, m, i, max_i, j;

	for (h = 0; h <= 2; h++)
	{
		if (h == 2)
		{
			max_i = 3;
		}
		else
		{
			max_i = 9;
		}

		for (i = 0; i <= max_i; i++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (j = 0; j <= 9; j++)
				{
					_putchar((h % 10) + 48);
					_putchar((i % 10) + 48);
					_putchar(':');

					_putchar((m % 10) + 48);
					_putchar((j % 10) + 48);
					_putchar('\n');
				}
			}
		}
	}
}
