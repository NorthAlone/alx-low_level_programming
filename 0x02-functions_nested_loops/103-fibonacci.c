#include "main.h"
#include <stdio.h>

/**
 * main - finds and print the even-valued terms
 * of the fibonacci terms that not exceed 4000000
 * Return: always 0 for sucess
 */

int main(void)
{
	int i;
	unsigned long int first = 1, second = 2, next = 0, sum = 2;

	for (i = 1; i < 4000000; i++)
	{
		if (i > 2)
		{
			next = first + second;
			first = second;
			second = next;
			 next = 0;
		}

		if ((second % 2) == 0)
			sum += second;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
