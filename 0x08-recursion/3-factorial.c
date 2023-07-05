#include "main.h"

/**
 * factorial - to check factorial of a given number
 * @n: the given number to check
 * Return: integer n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
