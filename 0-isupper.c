#include "main.h"

/**
 * _isupper - entry point
 * Description: Checks for uppercase character
 * Return: void
 **/

int _isupper(int c)
{
	char ch;
	int rep;

	ch = c + '0';

	if ( ch >= 'A' && ch <= 'Z')
	{
		rep = 1;
	}
	else
	{
		rep = 0;
	}

	return (rep);
}
