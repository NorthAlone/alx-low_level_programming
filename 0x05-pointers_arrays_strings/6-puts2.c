#include "main.h"

/**
* puts2 - entry point
* Description : prints every other character of a string,
* starting with the first character
* @str: String to print
* Return:void
*/

void puts2(char *str)
{
	int len, i;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
