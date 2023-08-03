#include "main.h"

/**
 * clear_bit - to set a bit to 0
 * @n: pointer to the number input
 * @index: the eindex to set bit to 0
 * Return: 1 (success) -1 (failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
