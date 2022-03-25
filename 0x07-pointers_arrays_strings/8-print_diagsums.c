#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix.
 * @a: pointer to array
 * @size: dimension of square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j1, j2, sumDiag1 = 0, sumDiag2 = 0;
	int r1 = size + 1, r2 = size - 1;

	j1 = 0;
	j2 = r2;
	for (i = 0; i < size; i++)
	{
		sumDiag1 += a[j1];
		sumDiag2 += a[j2];
		j1 += r1;
		j2 += r2;
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
