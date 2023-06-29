#include "main.h"

/**
 * leet - function that encode a string into 1337
 * @n: number to be modified
 * @
 * Return: character
 */

char *leet(char *n)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(n + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == n[x])
			{
				n[x] = b[y];
			}
		}
	}
	return (n);
}
