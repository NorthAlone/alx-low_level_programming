#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of value of arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
