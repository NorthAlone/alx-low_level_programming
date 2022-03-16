#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * Description:prints the sign of a number.
 * Return: 1, -1 or 0
 * @n: character to check
 **/

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else
	{
		ret = -1;
		_putchar('-');
	}
	return (ret);
}
