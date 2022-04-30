#include "main.h"

/**
 * binary_to_uint - converts a binary number to int
 * @b: string to convert
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, nbchar = 0;
	unsigned int sum = 0, nbr;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			nbchar++;
		else
			return (0);
		i++;
	}
	nbchar--;

	for (i = nbchar; i >= 0 ; i--)
	{
		nbr = (b[i] - '0') << (nbchar - i);
		sum += nbr;
	}
	return (sum);
}
