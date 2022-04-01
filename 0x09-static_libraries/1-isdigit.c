#include "main.h"

/**
 * _isdigit - entry point
 * Description: Checks for a digit
 * Return: void
 * @c: the character to check
 **/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
