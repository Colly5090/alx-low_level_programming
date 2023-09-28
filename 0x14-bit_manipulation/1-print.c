#include "main.h"

/**
 * print_binary - To print binary
 * @n: number to be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int current = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 1;

	while (current)
	{
		if (n & current)
		{
			i = 0;
			_putchar('1');
		} else if (!i)
		{
			_putchar('0');
		}
		current >>= 1;
	}

	if (i)
	{
		_putchar('0');
	}
}
