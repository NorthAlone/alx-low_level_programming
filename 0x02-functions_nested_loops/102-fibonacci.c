#include "main.h"
#include <stdio.h>

/**
 * main - prints the 50 fibonacci numerber
 * Return: always 0 for sucess
 */

int main(void)
{
	int i;
	unsigned long int first = 1, second = 2, next = 0;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
			printf("%d, ", first);
		if (i == 1)
			printf("%d, ", second);
		if (i > 2)
		{
			next = first + second;
			printf("%lu, ", next);

			first = second;
			printf("%lu, ", next);
			first = second;
			second = next;
			 next = 0;
		}
	}
	return (0);
}
