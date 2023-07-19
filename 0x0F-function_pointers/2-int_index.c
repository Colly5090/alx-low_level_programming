#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: an array of integers to search
 * @size: size of the input array
 * @cmp: a function pointer to return the array
 * Return: an integer searched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		cmp(array[x]) != 0;
		return (x);
	}
	return (-1);
}
