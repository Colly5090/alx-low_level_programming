#include "variadic_functions.h"

/**
 * sum_them_all - sum all args
 * @n: numbers to sum
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}

