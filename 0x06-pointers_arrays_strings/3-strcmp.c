#include "main.h"

/**
* _strcmp - entry point
* Description: compares two strings
* @s1: first string
* @s2: second string
* Return: int value
*/

int _strcmp(char *s1, char *s2)
{
	int i, resp = 0;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			resp = (s1[i] - s2[i]);
		}
		else
		{
			resp = 0;
		}

		i++;
	}

	return (resp);
}
