#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a given function
 * @array: a pointer of arrays to iterate
 * @size: size of the given array
 * @action: a function pointer that return the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
