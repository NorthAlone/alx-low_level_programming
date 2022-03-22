#include "main.h"

/**
* puts_half - entry point
* Description : prints half of a string
* @str: String to print
* Return:void
*/

void puts_half(char *str)
{
	int len, i, j, n;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		j = 0;
	}
	else
	{
		n = (len - 1) / 2;
		j = 1;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(str[n + i + j]);
	}
	_putchar('\n');
}
