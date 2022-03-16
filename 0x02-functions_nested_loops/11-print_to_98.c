#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - entry point
 * Description: prints all natural numbers from n to 98
 * Return: void
 * @n: integer to reached or begin
 **/
void print_to_98(int n)
{
	int i, counter;

	counter = 98 - n;
	if (counter != 0)
	{
		for (i = 0; i < (abs(counter) + 1); i++)
		{
			printf("%d", n);
			if (i != (abs(counter)))
			{
				_putchar(',');
				_putchar(' ');
			}

			if (counter > 0)
			{
				n += 1;
			}
			else if (counter < 0)
			{
				n -= 1;
			}

		}
	}
	else
	{
		printf("%d", n);
	}
}
