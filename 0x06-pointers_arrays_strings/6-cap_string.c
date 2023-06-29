#include "main.h"

/**
 * *cap_string - function that capitalized all string
 * @n: string to be modified
 *
 * Return: void
 */

char *cap_string(char *n)
{
	int x = 0, y;
	int z = 13;
	char numb[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{',
		'}'};

	while (n[x])
	{
		y = 0;

		while (y < z)
		{
			if ((x == 0 || n[x - 1] == numb[y]) && (n[x] >= 'a' && n[x] <= 'z'))
				n[x] -= 32;

			y++;
		}

		x++;
	}
	return (n);
}
