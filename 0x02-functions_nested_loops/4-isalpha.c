#include <stdio.h>
#include "main.h"

/**
 * _isalpha - entry point
 * Description:checks for alphabetic character.
 * Return: 1 for alphabetic character 0 if none
 * @c: character to check
 **/

int _isalpha(int c)
{
	int ret;

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
