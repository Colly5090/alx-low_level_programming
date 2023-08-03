#include "main.h"

/**
 * flip_bits - to flip the bits
 * @n: input number to be printed in bits
 * @m: current bit to flip
 * Return: number of bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipBit = n ^ m;
	unsigned int counter = 0;

	while (flipBit)
	{
		flipBit &= (flipBit - 1);
		counter++;
	}
	return (counter);
}
