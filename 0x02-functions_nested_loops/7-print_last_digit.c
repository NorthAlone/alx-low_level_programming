#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number.
 * Return: the value of the last digit
 * @n: number to check
 **/

int print_last_digit(int n)
{
	long n1, ret;

	n1 = (long) n;

	if (n1 < 0)
	{
		n1 *= (-1);
	}
	ret = (n1 % 10);
	_putchar('0' + ret);
	return (ret);
}
