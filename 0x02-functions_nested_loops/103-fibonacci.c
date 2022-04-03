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
	unsigned long int first = 1, second = 2, next = 0, sum = 0;

	for (i = 1; i < 33; i++)
	{
		if (second < 4000000 && (second % 2) == 0)
			sum += second;		
		next = first + second;
		first = second;
		second = next;
		next = 0;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
