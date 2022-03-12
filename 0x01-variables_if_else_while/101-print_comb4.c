#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: 0 for success
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (x != y && x != z && z != y)
				{
					if (y > x && z > y)
					}
						putchar(x + '0');
						putchar(y + '0');
						putchar(z + '0');
						if ((x * y * z) < 503)
						{
							putchar(',');
							putchar(' ');
						}
					}
			}	}
		}
	}

	putchar('\n');
	return (0);
}
