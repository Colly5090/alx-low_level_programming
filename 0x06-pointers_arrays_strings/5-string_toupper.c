#include "main.h"

/**
 * string_toupper - function that converts lowercases to uppercases
 * @n: number to be modified
 * Return: character
 */

char *string_toupper(char *n)
{
	int x;

	x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 97 && n[x] <= 122)
			n[x] -= 32;
		x++;
	}
	return (n);
}

