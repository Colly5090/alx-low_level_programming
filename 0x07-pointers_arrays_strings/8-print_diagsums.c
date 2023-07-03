#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of integers
 * @a: first integer
 * @size: second integer
 * Return: 0 always success
 */

void print_diagsums(int *a, int size)
{
	int i;
	int total1 = 0;
	int total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		total2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", total1, total2);
}

