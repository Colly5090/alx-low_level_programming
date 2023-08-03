#include "main.h"

/**
 * get_endianness - get endiannss
 * return: nothing
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) & x;

	return(*c);
}
