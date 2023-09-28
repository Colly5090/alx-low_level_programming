#include "main.h"

/**
 * binary_to_uint - to convert binary to decimal
 * @b: pointer string of 0 or 1
 * Return: value of the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		else
		{
			result = 2 * result + (b[i] - '0');
		}

	}
	return (result);
}
