#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of argument;
 * @av: array of argument value
 *
 * Return: pointer to the new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, av_len = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			av_len++;
		av_len++;
	}
	newStr = (char *)malloc(sizeof(char) * (av_len + 1));

	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	return (newStr);
}
