#include "main.h"

/**
 * main - print sum of number multiple
 * of 5 or 3
 * Return: always 0 for success
 */

int main(void)
{
	int i;
	unsigned long int valueOf3 = 0, valueOf5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			valueOf3 += i;
		}
		else if ((i % 5) == 0)
		{
			valueOf5 += i;
		}
	}
	printf("%lu\n", valueOf3 + valueOf5);
	return (0);
}
