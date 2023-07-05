#include "main.h"

/**
 * prime - function to determine a prime number
 * @x: number to input
 * @y: number to be iterated
 * Return: integer x
 */

int prime(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}

/**
 * is_prime_number - the input prime numbers to be determined
 * @n: number of input integers
 * Return: prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
