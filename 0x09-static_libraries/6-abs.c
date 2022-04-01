#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * Description: computes the absolute value of an integer.
 * Return: Always 0
 * @n: number to check
 **/

int _abs(int n)
{
	int ret;

	if (n > 0)
	{
		ret = n;

	}
	else if (n == 0)
	{
		ret = 0;
	}
	else
	{
		ret = n * (-1);
	}
	return (ret);
}
