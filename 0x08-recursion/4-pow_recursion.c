#include "main.h"

/**
 * _pow_recursion -calculate x raised to the power of y
 * @x: number that is powered by y
 * @y: power
 * Return: -1 or x power by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
