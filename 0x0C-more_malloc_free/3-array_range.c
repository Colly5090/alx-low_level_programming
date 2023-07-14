#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value of arrays of intergers
 * @max: maximum value of arrays of intergers
 * Return: a pointer to an array
 */

int *array_range(int min, int max)
{
	int *array;
	int x, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
		array[x] = min++;

	return (array);
}
