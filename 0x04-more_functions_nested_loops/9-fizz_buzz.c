#include <stdio.h>

/**
 * main - entry point
 * Description: print a triangle
 * Return: 0
 **/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
