#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print
 * Return: void print integer to stdout
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = - n;
		_putchar('-');
	}

	if (value / 10)
		print_number(value / 10);
	_putchar((value % 10) + '0');
}
