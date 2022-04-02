#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments value
 *
 * Return: 0 for success 1 if not
 */

int main(int argc, char **argv)
{
	int value, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && value >= 0; i++)
	{
		while (value >= coins[i])
		{
			result++;
			value -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
