#include "variadic_functions.h"

/**
 * print_numbers - prints number
 * @separator: string to print between number
 * @n: number of parameters
 * Return: print number to stdout
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (!separator)
		printf("%d", va_arg(list, int));

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
