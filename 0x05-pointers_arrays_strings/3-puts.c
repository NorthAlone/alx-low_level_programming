#include "main.h"

/**
* _puts - entry point
* Description : prints a string, followed by a new line, to stdout
* @str: String to print
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
