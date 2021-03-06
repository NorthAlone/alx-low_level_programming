#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - find the last digit of a random number and compare it
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDigit = n % 10;
	if (lstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	}
	else if (lstDigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDigit);
	}

	return (0);
}
