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

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%lu, ", first);
		if (i == 1)
			printf("%lu, ", second);
		if (i > 2)
		{
			next = first + second;
			if (i < 50)
				printf("%lu, ", next);
			else
				printf("%lu", next);

			first = second;
			second = next;
			 next = 0;
		}
	}
	printf("\n");
	return (0);
}
