#include "main.h"

/**
 * print_binary - to print in binary
 * @n: number to be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int value;
	int x, counter = 0;

	for (x = 63; x >= 0; x--)
	{
		value = n >> x;

		if (value & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
		if (!counter)
		{
			_putchar('0');
		}
	}
}

