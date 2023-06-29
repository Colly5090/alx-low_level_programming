#include "main.h"

/**
 * reverse_array - function that reverse an array of integers
 * @a: an array of integers
 * @n: number of elements to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
