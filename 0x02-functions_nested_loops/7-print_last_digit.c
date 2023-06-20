#include "main.h"

/**
 * print_last_digit - computes the absolute value of the integer
 * @n: the number to be targeted.
 * Return: the value of last_digit.
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	{
	digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
