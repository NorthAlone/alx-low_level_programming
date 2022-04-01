#include "main.h"

/**
 * main - prints all received argument
 * @argc: number of arguments
 * @argv: array of value of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
