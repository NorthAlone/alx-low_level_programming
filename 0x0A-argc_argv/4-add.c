#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of value of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int result = 0, number, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '9' || argv[i][j] < '0')
			{
				printf("Error");
				return (1);
			}
		}
	}

	for (k = 0; k < argc; k++)
	{
		number = atoi(argv[k]);

		if (number >= 0)
		{
			result += number;
		}
	}
	printf("%d\n", result);
	return (0);
}
