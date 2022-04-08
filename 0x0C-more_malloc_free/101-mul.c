#include "main.h"

/**
 * is_digit - check is a value is a digit
 * @value: value to check
 * Return: 0 for sucess if not -1
 */

int is_digit(char *value)
{
	int i = 0;

	while (value[i])
	{
		if (value[i] < '0' || value[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

/**
 * error_handle - handle errors for main
 */

void error_handle(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * print_number - print an integer
 * @value: integer to print
 * Return: void print interger to stdout
 */

void print_number(int value)
{
	if (value < 0)
	{
		value = -value;
		_putchar('-');
	}
	if (value / 10)
		print_number(value / 10);
	_putchar((value % 10) + '0');
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments value
 * Return: 0 for success if not 1
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || is_digit(num1) != 0 || is_digit(num2) != 0)
		error_handle();
	print_number(atoi(num1) * atoi(num2));
	_putchar('\n');
	return (0);
}
