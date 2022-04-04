#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print
 * Return: void print integer to stdout
 */

void print_number(int n)
{
	if (value < 0)
	{
		value = value * (-1);
		_putchar('-');
	}
	else if (value <= 9)
	{
		_putchar(value + '0');
	}
	else if (value > 9 && value <= 99)
	{
		_putchar((value / 10) + '0');
		_putchar((value % 10) + '0');
	}
	else if (value > 99 && value <= 999)
	{
		_putchar((value / 100) + '0');
		_putchar(((value / 10) % 10) + '0');
		_putchar((value % 10) + '0');
	}
	else if (value > 999)
	{
		_putchar((value / 1000) + '0');
		_putchar(((value / 100) % 10) + '0');
		_putchar(((value / 10) % 10) + '0');
		_putchar((value % 10) + '0');
	}
}
