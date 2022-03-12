#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: 0 for success
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
