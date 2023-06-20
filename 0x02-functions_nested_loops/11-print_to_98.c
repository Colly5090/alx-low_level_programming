#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98
 * @n: the number to begin counting at.
 * Return: 0 success
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
