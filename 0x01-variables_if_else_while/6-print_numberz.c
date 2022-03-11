#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: 0 for success
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 1, x + 1, x);
	}

	putchar('\n');
	return (0);
}
