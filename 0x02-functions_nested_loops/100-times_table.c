#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of table to print
 */

void print_times_table(int n)
{
	int i, j, value = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				(value = j * i);
				if (j == 0)
					putchar(value + '0');
				if (value <= 9 && j != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(value + '0');
				}
				else if (value > 9 && value <= 99)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((value / 10) + '0');
					putchar((value % 10) + '0');
				}
				else if (value > 99)
				{
					putchar(',');
					putchar(' ');
					putchar((value / 100) + '0');
					putchar((((value / 10)) % 10) + '0');
					putchar((value % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}
