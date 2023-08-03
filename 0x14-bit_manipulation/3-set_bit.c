#include "main.h"

/**
 * set_bit - to set a bit to 1
 * @n: the number to be printed to bit
 * @index: the index to set to bit
 * return: 1 (success) -1 (failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (1 << index) | *n;
		return (1);
	}
}
