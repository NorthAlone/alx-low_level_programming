#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search into
 * @accept: accepted char
 * Return: number of byte in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found = 0, result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				found = 1;
			}
		}
		if (found == 0)
		{
			return (result);
		}
	}
	return (0);
}
