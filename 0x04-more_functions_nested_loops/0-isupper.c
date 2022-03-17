#include "main.h"

/**
 * _isupper - entry point
 * Description: Checks for uppercase character
 * Return: void
 * @c: the character to check
 **/

int _isupper(int c)
{

	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
