#include "main.h"

/**
* print_rev - entry point
* Description : prints a string, in reverse, followed by a new line.
* @s: String to print in reverse order
* Return:void
*/

void print_rev(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
