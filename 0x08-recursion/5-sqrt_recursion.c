#include "main.h"

/**
 * sqr - a function that returns a natural number
 * @x: number to be calculated
 * @y: number to iterate
 * Return: integer x
 */

int sqr(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqr(x, y + 1));
}

/**
 * _sqrt_recursion - a function that calculate squre root of natural numbers
 * @n: numberto be squared
 * Return: integer sqr
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
