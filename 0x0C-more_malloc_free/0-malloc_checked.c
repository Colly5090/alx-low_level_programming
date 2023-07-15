#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function with pointer that allocate memory using malloc
 * @b: number of bytes to be allocated in memory
 * Return:  pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
