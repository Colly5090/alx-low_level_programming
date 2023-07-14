#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: element of size in byte in array
 * @size: size of the data type
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int x;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		array[x] = 0;

	return (array);
}
