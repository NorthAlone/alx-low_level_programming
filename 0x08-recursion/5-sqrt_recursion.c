#include "main.h"

/**
 * find_sqrt_recursion - find the square root number
 * @n: number to find the square root of
 * @i: number of iteration
 * Return: number i
 */

int find_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - find the square root number
 * @n: number to find the square root of
 * Return: number n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}
