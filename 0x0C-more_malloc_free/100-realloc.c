#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: previously allocated memory to pointer by malloc
 * @old_size: old size of memory allocated by ptr
 * @new_size: new size of memory to be allocated
 * Return:pointer to the array to new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	char *old_arr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	arr = malloc(new_size);
	if (!arr)
		return (NULL);

	old_arr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			arr[x] = old_arr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			arr[x] = old_arr[x];
	}

	free(ptr);
	return (arr);
}
