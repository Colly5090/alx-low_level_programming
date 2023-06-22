#include <stdio.h>
#include "main.h"

/**
 * main - entry point to print the largest prime factor
 * Return: 0 success
 */

int main(void)
{
	unsigned long int x, n = 612852485143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((n % x == 0) && (n != x))
			n = n / x;
	}
	printf("%lu\n", n);
	return (0);
}
