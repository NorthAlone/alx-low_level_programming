#include "main.h"

/**
 * is_prime_number - check if number is a prime number
 * @n: number to check
 * Return: 1 if prime number 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (search_prime_number(n, n - 1));
}

/**
 * search_prime_number - check if number is a prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime number 0 if not
 */

int search_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (search_prime_number(n, i - 1));
}
