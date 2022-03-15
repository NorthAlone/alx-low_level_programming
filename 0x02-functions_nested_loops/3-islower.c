#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * Description:checks for lowercase character.
 * Return: 1 for lowercase 0 if none
 * @c: character to check
 **/

int _islower(int c)
{
	int ret;

	if (c >= 97 && c <= 122)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	_putchar(ret + '0');
}
