#include "main.h"

/**
* _strlen - entry point
* Description : returns the length of a string.
* @s: String to return length
* Return: int value
*/

int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
