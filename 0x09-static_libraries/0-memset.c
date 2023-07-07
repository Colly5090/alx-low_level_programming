#include "main.h"

/**
 * _memset - character that fills memory with bytes
 * @b: character byte pointing
 * @n: number of byte memory set
 * @s: the pointer of the memory location
 * Return: character s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
