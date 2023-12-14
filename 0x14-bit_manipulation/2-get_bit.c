#include "main.h"

/**
 * get_bit - to get bit from an index
 * @n: number to be printed in bit
 * @index: index to be conerted to bit
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int theBit;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		theBit = (n >> index) & 1;
	}
	return (theBit);
}


