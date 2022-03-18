#include "main.h"

/**
 * print_diagonal - entry point
 * Description: draw a diagonal line in the terminal
 * Return: void
 * @n: number of '\' to print
 **/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar ('\\');
					_putchar ('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}

	}
	else
	{
		_putchar('\n');
	}
}
