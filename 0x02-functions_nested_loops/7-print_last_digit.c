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
	long int ret;

	if (n < 0)
	{
		n *= -1;
	}
	ret = (n % 10);
	_putchar('0' + ret);
	return (ret);
}
