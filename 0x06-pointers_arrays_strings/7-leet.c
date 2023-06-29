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

	for (x = 0; n[x] != '\n'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == a[y])
			{
				n[x] = b[y];
			}
		}
	}
	return (n);
}
