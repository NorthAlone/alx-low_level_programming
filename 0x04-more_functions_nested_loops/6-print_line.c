#include "main.h"

/**
 * print_line - entry point
 * Description: draw straight line in the terminal
 * Return: void
 * @n: number of '_' to print
 **/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\');
	}
	else
	{
		_putchar('\n');
	}
}
