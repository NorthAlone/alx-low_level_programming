#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of value of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	unsigned long int result;

	if (argc < 3 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atol(argv[1]) * atol(argv[2]);
		printf("%ld\n", result);
	}
	return (0);
}
