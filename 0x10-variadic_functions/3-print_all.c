#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: string to print between number
 * Return: print anything to stdout
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list list;
	char *separator = "", *str;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(list);

	printf("\n");
}