#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: string capitalized
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] == '\t')
			str[i] = ' ';
		if (str[i] == ' ' || str[i] == '\n')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		}
		if (i == 122)
			str[i] = 'H';
	}
	return (str);
}
