#include "main.h"

/**
* puts_half - entry point
* Description : prints half of a string
* @str: String to print
* Return:void
*/

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(str[n + i]);
	}
	_putchar('\n');
}
