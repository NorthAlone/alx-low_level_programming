#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument value
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;
	int (*calc)(int, int);

	operator = *argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((operator == '%' || operator == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(num1, num2);
	printf("%d\n", result);
	return (0);
}
