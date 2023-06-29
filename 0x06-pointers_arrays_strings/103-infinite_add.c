#include "main.h"

/**
 * infinite_add - function that add two numbers
 * @n1: first number
 * @n2: second number
 * @r: stored buffer
 * @size_r: buffer size
 * Return: character
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, y, k, l, m, z;

	for (x = 0; n1[x]; x++)
		;
	for (y = 0; n2[y]; y++)
		;
	if (x > size_r || y > size_r)
		return (0);
	m = 0;
	for (x -= 1, y -= 1, k = 0; k < size_r - 1; x--, y--, k++)
	{
		z = m;
		if (x >= 0)
			z += n1[x] - '0';
		if (y >= 0)
			z += n2[y] - '0';
		if (x < 0 && y < 0 && z == 0)
		{
			break;
		}
		m = z / 10;
		r[k] = z % 10 + '0';
	}
	r[k] = '\0';
	if (x >= 0 || y >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
