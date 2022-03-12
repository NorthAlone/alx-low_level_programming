#include <stdio.h>
#include <math.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: 0 for success
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y)
			{
				if (y > x)
				{
					putchar(x + '0');
					putchar(y + '0');
					if ((x * pow(10, (int)log10(y) + 1) + y;) != 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
